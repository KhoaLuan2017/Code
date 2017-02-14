
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <string.h>

const char WORDS_UPCASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char WORDS_LOWER[] = "abcdefghijklmnopqrstuvwxyz";
const char WORDS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char NUMBERS[] = "0123456789";
const char NUMBERS_WORDS_UPCASE[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char NUMBERS_WORDS[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

char *getAccount(char *charset , int length){
    srand(time(NULL));
    int timeToLife = rand() % 20 + 1;
    char u[length], p[length];
    u[length] = '\0';
    p[length] = '\0';
    int i;
    if (charset[0] == '\0')
    {
        for (i = 0; i < length; i++)
        {
            if (i < 3)
            {
                u[i] = WORDS_UPCASE[rand() % (int) (strlen(WORDS_UPCASE) - 1)];
                p[i] = WORDS_UPCASE[rand() % (int) (strlen(WORDS_UPCASE) - 1)];
            }else{
                u[i] = NUMBERS_WORDS_UPCASE[rand() % (int) (strlen(NUMBERS_WORDS_UPCASE) - 1)];
                p[i] = NUMBERS_WORDS_UPCASE[rand() % (int) (strlen(NUMBERS_WORDS_UPCASE) - 1)];
            }
        }

    }else{

        for (i = 0; i < length; i++)
        {
            u[i] = charset[rand() % (int) (strlen(charset) - 1)];
            p[i] = charset[rand() % (int) (strlen(charset) - 1)];
        }   
    }
    char ttl[10];
    ttl[10] = '\0';
    snprintf(ttl, 10, "%d", timeToLife * 30);
    char result[100];
    result[100] = '\0';
    strcpy(result, "Username=");
    strcat(result, u);
    strcat(result, "&Password=");
    strcat(result, p);
    strcat(result, "&TimeToLife=");
    return strcat(result, ttl);
}

int main(int argc, char** argv)
{
	printf("Welcome to simple package toancv_tyluu:\n");
	printf("Generate ramdom username and account\n");	
	char *first;
      	char * second;
      	int length;
  	if(strcmp(argv[1],"--number") ==0 || strcmp(argv[1],"--text") ==0 || strcmp(argv[1],"--mix1")==0 || strcmp(argv[1],"--mix2") ==0){
      	first = argv[1];
      	second = argv [2];
	printf("%s \t %s\n",first,second);
      		if( argc ==3){
			sscanf(second, "%d", &length);
      			if(length <=12 && length >=4) {
		      		char *x;
		        	if(!strcmp(first,"--number")){
		            			x = getAccount("0123456789", length);
				}
				if(!strcmp(first,"--text")){

		            			
					    	x = getAccount("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", length);
						}
				if(!strcmp(first,"--mix1")){
					    x = getAccount("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",length);
					    }
				else
					    x = getAccount("\0",length);
				printf("Password Generate: %s\n",x);
	  		} else {
		  		printf("Length: >=4 and <=12\n");
		  		printf("-h to show help!\n");
		  		return 0;
			}
		} else {
			printf("Input error!\n You have to input correct value\n");
		  	printf("-h to show help!\n");
		  	return 0;
		}
	
	}
	else {
		if(argc !=2){
			printf("Input error!\n");
		  	printf("-h to show help!\n");
		  	return 0;
		}else{
			first = argv[1];
			if(strcmp(first,"-h") ==0 ){
				printf("Usage: toancv [OPTION] [LENGTH]\n");  
				printf("Generate Account and Password for radius server!\n");
				printf("Type [OPTION]:\n");
				printf("--numner\tto get number Account and Password\n");
				printf("--text\to get text Account and Password\n");
				printf("--mix1\tto met both number and text Account and Password\n");
				printf("--mix2\tto get Account and Password like Flight tickets\n");
				printf("\n\n");
				printf("Type [LENGTH]:\n");
				printf("number\tlength user and password generate\n\n");		}			
		}
	}
	return 0;
}

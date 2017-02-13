/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package account;

import java.util.Scanner;
import java.util.Random;

/**
 *
 * @author TyLuuDinh
 */
public class Account {

    public static void main(String [] args) {
        Account a= new Account();
        while (true) {
            int choice = a.menu();
            System.out.println("Press Enter to get Account");
            String input = a.Input().nextLine();
            if (input.isEmpty()) {
                System.out.println("\nAccount: " + a.generateAccount(choice));
            }
        }

    }
    
    char[] WORDS_UPCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
    char[] WORDS_LOWER = "abcdefghijklmnopqrstuvwxyz".toCharArray();
    char[] WORDS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
    char[] NUMBERS = "0123456789".toCharArray();
    char[] NUMBERS_WORDS_UPCASE = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
    char[] NUMBERS_WORDS = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();

    public char[] getChar(int choice) {
        switch (choice) {
            case 1:
                return this.NUMBERS;
            case 2:
                return this.WORDS;
            case 3:
                return this.NUMBERS_WORDS;
            case 4:

        }
        return null;
    }
    
    public String generateString(int choice) {
        char[] chars = getChar(choice);
        StringBuilder sb = new StringBuilder();
        Random random = new Random();
        int lenghtChar = this.randomLength(5, 9);
        if (choice != 4) {
            for (int i = 0; i < lenghtChar; i++) {
                char c = chars[random.nextInt(chars.length)];
                sb.append(c);
            }
        } else {
            lenghtChar = this.randomLength(6, 7);
            for (int i = 0; i < 3; i++) {
                char c = this.WORDS_UPCASE[random.nextInt(this.WORDS_UPCASE.length)];
                sb.append(c);
            }
            for (int i = 3; i < lenghtChar; i++) {
                char c = this.NUMBERS_WORDS_UPCASE[random.nextInt(this.NUMBERS_WORDS_UPCASE.length)];
                sb.append(c);
            }
        }

        return sb.toString();
    }

    public String generateAccount(int choice) {
        return "Username=" + this.generateString(choice)
                + "&Password=" + this.generateString(choice)
                + "&TimeToLife=" + 30 * randomLength(1, 6);
    }

    public int randomLength(int min, int max) {
        Random random = new Random();
        return random.nextInt(max - min + 1) + min;
    }

    public Scanner Input() {
        Scanner scanIn = new Scanner(System.in);
        return scanIn;
    }

    public int menu() {
        int choice;
        System.out.println("-----GENERATE USERNAME - PASSWORD - TIME TO LIFE----\n");
        System.out.println("----------------[Mode 1] Only Numbers---------------\n");
        System.out.println("----------------[Mode 2] Only Words-----------------\n");
        System.out.println("----------------[Mode 3] Words and numbers----------\n");
        System.out.println("----------------[Mode 4] Flight tickets-------------\n");
        System.out.println("---------------Selection [1, 2, 3, 4]:");
        choice = this.Input().nextInt();
        switch (choice) {
            case 1:
                System.out.println("You chose mode 1 Only Numbers\n");
                break;

            case 2:
                System.out.println("You chose mode 2 Only Words\n");
                break;

            case 3:
                System.out.println("You chose mode 3 Words and numbers\n");
                break;

            case 4:
                System.out.println("You chose mode 4 Flight tickets Format\n");
                break;
            default:
                System.out.println("Wrong character. Print menu again\n\n");
                break;
        }
        return choice;
    }
    
}

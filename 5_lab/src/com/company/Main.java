package com.company;

import java.awt.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        String str = getUserInput();

        ArrayList<String> vowels = findVowels(str);

        printResults(str, vowels);

    }

    private static void printResults(String str, ArrayList<String> vowels) {
        System.out.println("Гласные которые не в ходят ни в одно слово: " + vowels.toString());
        System.out.println("Исходная последовательность слов: " + str);
    }

    private static String getUserInput() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Введите слова: ");
        return sc.nextLine();
    }

    private static ArrayList<String> findVowels(String str) {
        ArrayList<String> vowels = new ArrayList<String>();
        for (String vowel : new String[]{"а", "е", "и", "о", "у", "ы", "э", "ю", "я"}) {
            if (!str.contains(vowel)) {
                vowels.add(vowel);
            }
        }
        return vowels;
    }
}

package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Введите a= ");
        int a = sc.nextInt();
        System.out.println("Введите b= ");
        int b = sc.nextInt();
        System.out.println("Введите h= ");
        int h = sc.nextInt();

        func(a, b, h);

    }

    private static void func(int a, int b, int h) {
        double y = 0;
        int x = a;
        do {
            y += Math.pow(x, 2) - 2 * x - CustomMath.sin(x);
            x += h;
        } while (x < b);
        System.out.println("Значение вычисления функции = " + y);
    }
}

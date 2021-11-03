package com.company;

public class Main {

    public static void main(String[] args) {
        double x = -0.6;
        for (int i = 1; i <= 20; i++) {
            System.out.println("Итерация # " + i);
            func1(x);
            x += 0.05;
            func2(x);
        }
    }

    private static void func2(double x) {
        double eps1 = 0.01, eps2 = 0.001, eps3 = 0.0001;
        int n1 = 0, n2 = 0, n3 = 0;
        double f1 = 0, f2 = 0, f3 = 0;
        double temp;
        do {
            temp = (Math.pow(-1, n1) * Math.pow(2, 2 * n1) * Math.pow(fact(n1), 2)) / (fact(2 * n1 + 1)) * Math.pow(x, 2 * n1 + 1);
            f1 += temp;
            n1++;
        } while (Math.abs(temp) >= eps1);

        do {
            temp = (Math.pow(-1, n2) * Math.pow(2, 2 * n2) * Math.pow(fact(n2), 2)) / (fact(2 * n2 + 1)) * Math.pow(x, 2 * n2 + 1);
            f2 += temp;
            n2++;
        } while (Math.abs(temp) >= eps2);

        do {
            temp = (Math.pow(-1, n3) * Math.pow(2, 2 * n3) * Math.pow(fact(n3), 2)) / (fact(2 * n3 + 1)) * Math.pow(x, 2 * n3 + 1);
            f3 += temp;
            n3++;
        } while (Math.abs(temp) >= eps3);
        System.out.println("Результат выполнения func2/f1 = " + f1 + " N1 = " + n1);
        System.out.println("Результат выполнения func2/f2 = " + f2 + " N2 = " + n2);
        System.out.println("Результат выполнения func2/f3 = " + f3 + " N3 = " + n3);
    }

    private static void func1(double x) {
        double result = (Math.log(x + Math.sqrt(1 + Math.pow(x, 2)))) / (Math.sqrt(1 + Math.pow(x, 2)));
        System.out.println("Результат выполнения func1 = " + result);
    }

    static int fact(int n) {
        if (n == 0)
            return 1;
        else
            return (n * fact(n - 1));
    }
}

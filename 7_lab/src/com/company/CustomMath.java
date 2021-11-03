package com.company;

public class CustomMath {
    public static double sin(double x) {
        double sum = 0.0;
        int n = 0;
        double eps = 0.001;
        do {
            x = x * (Math.pow(-x, 2) / 2 * n * (n + 1));
            sum += x;
            n++;
        } while (Math.abs(Math.pow(x, 2 * n - 1) / fact(n)) >= eps);
        return sum;
    }

    public static int fact(int n) {
        if (n == 0)
            return 1;
        else
            return (n * fact(n - 1));
    }
}

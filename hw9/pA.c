#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double (*F)(double, int); // Define F as a pointer to a function that takes a double and an int and returns a double

// Functions to calculate power, multiply, and divide
double power(double x, int n) {
    return pow(x, n);
}

double multiply(double x, int n) {
    return x * n;
}

double divide(double x, int n) {
    return x / n;
}

// Function to compute (f(x, n))^m
double powerpower(F func, double x, int n, int m) {
    return pow(func(x, n), m);
}

// Function to compute (f(x, n)) * m
double powermultiply(F func, double x, int n, int m) {
    return func(x, n) * m;
}

// Function to compute (f(x, n)) / m
double powerdivide(F func, double x, int n, int m) {
    return func(x, n) / m;
}

int main(int argc, char *argv[]) {

    double x = atof(argv[1]);
    int n = atoi(argv[2]);
    int m = atoi(argv[3]);

    printf("%.6f\n", powerpower(power, x, n, m));
    printf("%.6f\n", powerpower(multiply, x, n, m));
    printf("%.6f\n", powerpower(divide, x, n, m));

    printf("%.6f\n", powermultiply(power, x, n, m));
    printf("%.6f\n", powermultiply(multiply, x, n, m));
    printf("%.6f\n", powermultiply(divide, x, n, m));

    printf("%.6f\n", powerdivide(power, x, n, m));
    printf("%.6f\n", powerdivide(multiply, x, n, m));
    printf("%.6f\n", powerdivide(divide, x, n, m));

    return 0;
}

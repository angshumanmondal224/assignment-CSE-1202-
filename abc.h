#ifndef ABC_H
#define ABC_H

#include <stdio.h>

// ---------------- BASIC FUNCTIONS ----------------

static inline int max(int a, int b) {
    return (a > b) ? a : b;
}

static inline int min(int a, int b) {
    return (a < b) ? a : b;
}

static inline int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

static inline int isOdd(int n) {
    return n % 2 != 0;
}

static inline int isEven(int n) {
    return n % 2 == 0;
}

static inline int digitSum(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

static inline int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

// ---------------- CONVERSION FUNCTIONS ----------------

// Decimal → Binary (as number like 1010)
static inline long long decimalToBinary(int n) {
    long long bin = 0, rem, i = 1;
    while (n > 0) {
        rem = n % 2;
        bin += rem * i;
        i *= 10;
        n /= 2;
    }
    return bin;
}

// Binary → Decimal
static inline int binaryToDecimal(long long n) {
    int dec = 0, base = 1, rem;

    while (n > 0) {
        rem = n % 10;
        dec += rem * base;
        base *= 2;
        n /= 10;
    }
    return dec;
}

// Decimal → Octal
static inline long long decimalToOctal(int n) {
    long long oct = 0, i = 1;

    while (n > 0) {
        oct += (n % 8) * i;
        i *= 10;
        n /= 8;
    }
    return oct;
}

// Decimal → Hex (string)
static inline void decimalToHex(int n, char hex[]) {
    sprintf(hex, "%X", n);
}

// ---------------- EXTRA FUNCTIONS ----------------

static inline long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

static inline int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

static inline int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

static inline long long power(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

static inline int palindrome(int n) {
    return n == reverseNumber(n);
}

#endif

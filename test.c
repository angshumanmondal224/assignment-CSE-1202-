#include "abc.h"

int main() {

    int a = 10, b = 25;

    printf("Max: %d\n", max(a, b));
    printf("Min: %d\n", min(a, b));

    printf("IsPrime(7): %d\n", isPrime(7));
    printf("IsOdd(7): %d\n", isOdd(7));
    printf("IsEven(7): %d\n", isEven(7));

    printf("Digit Sum (1234): %d\n", digitSum(1234));
    printf("Reverse (1234): %d\n", reverseNumber(1234));

    printf("Decimal to Binary (10): %lld\n", decimalToBinary(10));
    printf("Binary to Decimal (1010): %d\n", binaryToDecimal(1010));
    printf("Decimal to Octal (10): %lld\n", decimalToOctal(10));

    char hex[20];
    decimalToHex(255, hex);
    printf("Decimal to Hex (255): %s\n", hex);

    printf("Factorial (5): %lld\n", factorial(5));
    printf("GCD (12,18): %d\n", gcd(12,18));
    printf("LCM (12,18): %d\n", lcm(12,18));
    printf("Power (2^5): %lld\n", power(2,5));

    printf("Palindrome (121): %d\n", palindrome(121));

    return 0;

}

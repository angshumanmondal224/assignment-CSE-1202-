#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int max(int a, int b);
int min(int a, int b);
void isOdd(int num);
void isEven(int num);
bool isPrime(int n);
int digitsum(int digit);
int reverseNumber(int num);
void decimalToHexa(int num);
void decimalToOctal(int num);
void decimalToBinary(int num);
int binaryToDecimal(long long binary);
bool palindrome(int arr[], int n);
long long factorial(int n);
int gcd(int a, int b);
long long power(int base, int exp);
void swap(int a, int b);


int max(int a, int b){
    int max;
    if (a>b) max = a;
    else max = b;

    return max;
}

int min(int a, int b){
    int min;
    if (a<b) min = a;
    else min = b;

    return min;
}

bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    int l = sqrt(n);
    for(int i=3; i<=l;i = i+2){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

void isOdd(int num){
    if(num % 2 !=0){
        printf("%d is Odd\n",num);
    }
    else{
        printf("%d is not Odd\n",num);
    }
}

void isEven(int num){
    if(num%2 == 0){
        printf("%d is Even\n",num);
    }
    else{
        printf("%d is not Even\n",num);
    }
}

int digitsum(int digit){
    int sum=0;
    if(digit <0){
        digit = -digit;
    }
    while(digit !=0){
        int r = digit%10;
        sum+=r;
        digit /=10;
    }

    return sum;
}

int reverseNumber(int num){
    int r_num = 0;
    if(num <0) num =-num;
    while(num > 0){
        int r = num % 10;
        r_num = r_num*10 + r;
        num /=10;
    }

    return r_num;
}

void decimalToBinary(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int b[32];
    int i=0;
    while(num >0){
        b[i] = num % 2;
        num /=2;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%d",b[j]);
    }
    printf("\n");
}

void decimalToOctal(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int Oct[32];
    int i=0;
    while(num >0){
        Oct[i] = num % 8;
        num /=8;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%d",Oct[j]);
    }
    printf("\n");
}

void decimalToHexa(int num){
    if(num ==0) {
        printf("0\n");
        return;
    }

    int Hexa[32];
    int i=0;
    while(num >0){
        int r = num % 16;
        if(r<10){
            Hexa[i] = r + '0';
        }
        else{
            Hexa[i] = (r-10) + 'A';
        }

        num /=16;
        i++;
    }

    for(int j = i-1; j>=0; j--){
        printf("%c",Hexa[j]);
    }
    printf("\n");
}

bool palindrome(int arr[], int n){
    for(int i = 0; i< n/2; i++){
        if(arr[i] != arr[n-i-1]){
            return false;
        }
    }
    return true;
}

int binaryToDecimal(long long binary) {
    int decimal = 0;
    int base = 1;  // 2^0

    while (binary > 0) {
        int lastDigit = binary % 10;
        binary /= 10;
        decimal += lastDigit * base;
        base *= 2;
    }

    return decimal;
}


long long factorial(int n) {
    if (n < 0)  return -1;      
    if (n == 0 || n == 1) return 1;
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a <= 0 || b <= 0) return -1; 
    int lcm =  (a / gcd(a, b)) * b;
    return lcm;        
}



long long power(int base, int exp) {
    if (exp < 0)  return -1;    
    long long result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    return result;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

    printf("%d %d\n",a,b);
}
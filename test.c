#include <stdio.h>
#include<stdbool.h>
#include "abc.h"



int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    bool flag = palindrome(arr, n);
    if(flag){                       
        printf("YES it is palindrome\n");
    }
    else{
        printf("No it is not palindrome\n");
    }
    // long long binary; 
    // scanf("%lld",&binary); 
    // int decimal = binaryToDecimal(binary);
    // printf("%d\n",decimal);

    // int a,b;
    // scanf("%d %d",&a,&b);
    // isOdd(a);
    // isEven(b);
    // printf("Before swap: a=%d || b = %d\n",a,b);
    // swap(a,b);
    // printf("Maximum of %d and %d is = %d\n",a,b,max(a,b));
    // printf("Minimum of %d and %d is = %d\n",a,b,min(a,b));
    // printf("Factorial of %d is =%d\n",a,factorial(a)); 
    // printf("GCD of %d and %d = %d\n",a,b,gcd(a,b));
    // printf("LCM of %d and %d = %d\n",a,b,lcm(a,b));
    // bool prime = isPrime(a);
    // if(prime){
    //     printf("%d is a prime number\n",a);
    // }else{
    //     printf("%d is not a prime number\n",a);
    // }

    // int number;
    // scanf("%d",&number);
    // int digit_sum = digitsum(number);
    // int rev_num = reverseNumber(number);
    // printf("digit sum of %d is = %d\n",number,digit_sum);
    // printf("reverse of %d is = %d\n",number,rev_num);

    // decimalToBinary(number);
    // decimalToOctal(number);
    // decimalToHexa(number);

    // int ans = power(10,3);
    // printf("%d\n",ans);

    // int fact = factorial(5);
    // printf("%d\n",fact);



    return 0;
}
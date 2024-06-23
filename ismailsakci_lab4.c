#include <stdio.h>
#include <time.h>
#include<string.h>

int isPrimeNumber(int num) {
    // 0 and 1 are not prime numbers
    if (num < 2) {
        return 0;
    }


    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {

            return 0;
        }
    }

    return 1;
}
void printPrimeDenominator(int n){
    int i;
    for(i=2;i<n;i++){
        if (n % i == 0 && isPrimeNumber(i)) {
            printf("%d  ", i);
        }
    }
}

int main()
{
    int number;

    printf("Enter a number from 100 to 1000:\n");
    scanf("%d", &number);
    while(1){
        if(number<100 || number>1000){
            printf("Your number is not in range. Enter a number from 100 to 1000:\n");
            scanf("%d", &number);
        }
        else{
            break;
        }
    }
    int primeORnot = isPrimeNumber(number);
    if(primeORnot == 1){
        printf("RUNAWAY it is a prime number!\n");
    }
    else{
        printf("These are the little primes sir!\n");
        printPrimeDenominator(number);
    }


    return 0;
}
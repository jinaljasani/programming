#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int a;

    printf("Enter a 3-digit number: ");
    scanf("%d", &a);

    int reversedNumber = reverseNumber(a);

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}

#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // check if the number is Armstrong
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    originalNum = num;

    // count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // store the sum of nth power of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if the number is Armstrong
    if (result == num)
        return 1; // Armstrong number
    else
        return 0; // not an Armstrong number
}

#include <stdio.h>
#include "main.h"

void sum2() {
    int num1, num2, sum2;

    printf("Enter the two number: ");
    scanf("%d%d", &num1,&num2);

    sum2 = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum2);
}


#include<stdio.h>

void even_odd(int Num1) {
    if (Num1 % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
}

int factorial(int fa) {
    if (fa == 0) {
        return 1;
    }
    return fa * factorial(fa - 1);
}

int main() {
    int num1;

    printf("Enter number: ");
    scanf("%d", &num1);

    even_odd(num1);

    int fact = factorial(num1);
    printf("Factorial of %d is %d\n", num1, fact);

    return 0;
}


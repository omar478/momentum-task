#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter numbers :\n");

    while(scanf("%d", &num))
    {
        sum += num;
    }
    printf("sum : %d",sum);
}

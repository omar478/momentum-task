#include<stdio.h>
int main(){

int num ,bit;
printf("enter the number: ");
scanf("%d",&num);

printf("enter the bit to be cleared: ");
scanf("%d",&bit);

num = num &(~(1 << bit));
printf("the number after clearing the bit number %d is %d", bit,num);
}

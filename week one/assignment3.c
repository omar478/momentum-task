#include<stdio.h>
int main(){

int num1,num2,res ;
char op;
printf("enter 2 number and operation\n");
scanf("%d %d %c",&num1,&num2,&op);
switch(op)
{

case'+':
    res=num1 +num2 ;
    printf("%d",res);
    break;
case'-':
    res=num1 -num2 ;
    printf("%d",res);
    break;
case'/':
    res=num1 /num2 ;
    printf("%d",res);
    break;
case'*':
    res=num1 * num2 ;
    printf("%d",res);
    break;
default:
printf("error");
    break;

}

}

//Question: Write a program to get two numbers from user and 
//print the LCM of those numbers.
#include<stdio.h>
int main()
{
    int num1, num2,temp,lcm;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    lcm=(num1*num2)/a;
    printf("LCM of %d and %d is %d",&num1,&num2,&lcm);
}
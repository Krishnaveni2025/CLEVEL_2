//Question: Write a program to get a number from user and print the sum of all  digits.
//Answer: 
//Input: 123456 - Output – 21
//Input: 76895439 - Output – 51
//Input: 675 – Output - 18
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int sum=0,carry;
    while (x!=0){
    carry=x%10;
    sum=sum+carry;
    x /= 10;
    }
    printf("output: %d", sum);
    
}
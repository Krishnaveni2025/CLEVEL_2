//Question: Write a program to get a number from user and print the reverse of that  number
//Answer: 
//Input : 123456 - Output – 654321
//Input : 76895439- Output – 93459867
//Input : 675 – Output - 576
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int reverse=0,carry;
    while (x!=0){
    carry=x%10;
    reverse=(reverse*10)+carry;
    x /= 10;
    }
    printf("output: %d", reverse);
    
}
//Question: Write a program to get a number from user print the total number of  digits in that number
//Answer: 
//Input : 123456 - Output – 6
//Input : 76895439- Output – 8
//Input : 675 – Output - 3
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int count=0;
    while (x!=0){
    x /= 10;
    count++;
    }
    printf("output: %d", count);
    
}
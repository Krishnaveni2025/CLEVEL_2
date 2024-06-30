//Question: Write a program get number from user 
//print the total number of single-digit prime numbers in the number.
//Answer: 
//Input: 163496481 - Output: 1
//Input: 364925 - Output: 3
#include<stdio.h>
int main()
{
    int x,temp,c;
    printf("Enter a number: ");
    scanf("%d",&x);
    c=0;
    while (x>0){
    temp=x%10;
    if(temp==2||temp==3||temp==5||temp==7){
    c++;
    }
    x=x/10;
    }
    printf("Total count number of single digit prime numbers:%d",c);
    return 0;
}
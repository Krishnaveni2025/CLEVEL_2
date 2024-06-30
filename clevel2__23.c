//Question: Write a program get number from user print the total number of single-
//digit perfect square numbers in the number.
//Answer: 
//Input: 123456789 - Output: 3
//Input: 987531 - Output: 2
#include<stdio.h>

int main()
{
    int x,temp,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        temp=x%10;
        if(temp==0|| temp==1 || temp==4 || temp==9) {
            c++;
        }
        x=x/10;
    }
    printf("Total count of single digit perfect square numbers: %d",c);
}
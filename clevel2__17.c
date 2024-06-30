//Question: Write a program to get a number from user, print whether that number is 
//prime, and sum of digit is equal to 14.
//Answer: 
//Input: 59 - Output: Prime & Sum of Digits is 14
//Input: 77 - Output: Not Prime but sum of digits is 14
//Input: 13 - Output: Prime, but sum of Digits is not 14
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,ones,tens,sum,c=0;
    ones=x%10;
    tens=x/10;
    sum=ones+tens;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)    
        if(sum==14)
            printf("%d is prime & sum of digits is 14",x);
        else
             printf("%d is prime but sum of digits is not 14",x);   
    else
        if(sum==14)
            printf("%d is not prime but sum is 14 ",x);
        else
            printf("%d is not prime & sum is not 14");    

}
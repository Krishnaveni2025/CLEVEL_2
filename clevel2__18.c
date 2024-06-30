//Question: Write a program to get number from user, print whether that number’s 
//first two digits (ten’s digits and one’s digit) is prime.
//Answer: 
//Input: 359 - Output: Prime
//Input: 3577 - Output: Not Prime
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,first,second,num,c=0;
    first = x%10;
    second = (x/10)%10;
    num=(second*10)+first ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}
//Question: Write a program get number from user
//print whether that number is prime or not.
//Answer: 
//Input : 31 - Output : Prime
//Input : 27 - Output : Not Prime.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,c=0;
    i=1;
    while(i<=x) {
        if(x%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not");

}
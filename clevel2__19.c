//Question: Write a program to get a 4-digit number from user, print whether that 
//number’s middle two digits (hundred’s digit and ten’s digit) is prime.
//Answer: 
//Input: 6359 - Output: Not Prime
//Input: 3517 - Output: Prime
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    int i,third,second,num,c=0;
    third = (x/100)%10;
    second = (x/10)%10;
    num=(third*10)+second ;
    i=1;
    while(i<=num) {
        if(num%i ==0)
            c++;
        i++;
    }
    if(c==2)
        printf("prime");
    else
        printf("not prime");

}

//Question: Write a program print total number of single digit Prime numbers
//Answer: 4
#include<stdio.h>
int main()
{
    int i,x,c=0;
    for(i=1; i<10; i++) {
        for(x=2; x<i; x++) {
            if(i%x == 0)
                break;
        }
        if(i==x)
        c++;  
    }
    printf("%d",c);
}
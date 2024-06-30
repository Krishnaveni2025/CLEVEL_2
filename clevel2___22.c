//Question: Write a program get number from user 
//print the total number of two-digit odd numbers in the number.
//Answer: 
//Input: 12345678 - Output: 3
//Input: 987531 - Output: 4
#include<stdio.h>

int main()
{
    int x,temp,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x!=0){
        temp = x%100;
        if((temp >= 10) && ((temp%2) != 0)){
            c++;   
        }
    x=x/10;
    }
  printf("Count of Two digit Odd numbers: %d",c);  
  
}
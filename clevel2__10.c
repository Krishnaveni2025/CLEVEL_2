//Question: Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.
//Answer: 375
#include<stdio.h>
int main ()
{
int x;
 // Your Code here
 x=11;
 int sum=0;
loop: if(x < 100) 
 {
 // Your code here
 int tenes = x/10;
 if((tenes == 7) && (x%2 == 1)){
 sum=sum+x;
 //printf("%d\n",x);
 x++;
 }
 else{
 x=x+1;}
 goto loop;
 }//your code here 
 printf("%d\n",sum);
}
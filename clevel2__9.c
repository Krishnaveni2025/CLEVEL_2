//Question: Write a loop program to print the sum of two-digit numbers whose  one’s digit is 5.
//Answer: 495
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
 int ones = x%10;
 if(ones == 5){
 sum=sum+x;
 x=x+1;
 }
 else{
 x=x+1;}
 goto loop;
 }//your code here 
 printf("%d\n",sum);
}
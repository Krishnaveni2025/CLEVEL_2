
//Question: Write a loop program to print sum of 6 to 1.
//Answer: 21
#include<stdio.h>
int main ()
{
int x;
 // Your Code here
 int sum=0;
 x=6;
loop: if(x > 0) 
 {
 // Your code here
 sum=sum+x;
 x--;
 goto loop;
 }
// Your code here
printf("%d",sum);
}
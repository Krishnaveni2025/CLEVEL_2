//Question: Write a loop program to print sum of 1 to 5.
//Answer: 15
#include<stdio.h>
int main ()
{
int x;
 // Your Code here
 int sum=0;
 x=1;
loop: if(x < 6) 
 {
 // Your code here
 sum=sum+x;
 x++;
 goto loop;
 }
// Your code here
printf("%d",sum);
}
//Question: Write a loop program to print the two-digit odd numbers, below 20.
//Answer: 
//11
//13
//15
//17
//19
#include<stdio.h>
int main ()
{
int x;
 // Your Code here
 x=11;
loop: if(x < 20)
 {
 // Your code here
 int check_odd=x%2;
 if(check_odd != 0){
 printf("%d\n",x);
 }
x++;
 goto loop;
 }
}

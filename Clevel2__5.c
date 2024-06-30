//Question: Write a loop program to print odd numbers 1 to 9.
//Answer:
//1
//3
//5
//7
//9
#include<stdio.h>
int main ()
{
int x;
 // Your Code here
 x=1;
loop: if(x < 10)
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

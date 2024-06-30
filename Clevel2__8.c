//Question: Write a loop program to print the two-digit even numbers, who’s sum of digits are 6.
//Answer:
//24
//42
//60
#include<stdio.h>
int main ()
{
    int x;
// Your Code here
    x=11;
loop:
    if(x < 100)
    {
// Your code here
        int check_even=x%2;
        int sum,ones,tens;
        ones=x%10;
        tens=x/10;
        sum=ones+tens;
        if(check_even == 0) {
            if(sum == 6) {
                printf("%d\n",x);
            }
        }
        x++;
        goto loop;
    }
}

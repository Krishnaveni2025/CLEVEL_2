//Question: Write a loop program to print the two-digit odd numbers, who’s sum of digits are 7.
//Answer:
//25
//43
//61

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
        int check_odd=x%2;
        int sum,ones,tens;
        ones=x%10;
        tens=x/10;
        sum=ones+tens;
        if(check_odd != 0) {
            if(sum == 7) {
                printf("%d\n",x);
            }
        }
        x++;
        goto loop;
    }
}

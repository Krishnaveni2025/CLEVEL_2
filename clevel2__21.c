//Question: Write a program get number from user
//print the total number digits
//which are odd in the number.
//Answer:
//Input : 12345678 - Output : 4
//Input : 987531 - Output : 5
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //your code here
    int count=0;
    while (x!=0) {
        int digit =x%10;
        if(digit%2 != 0)
            count++;
      x=x/10;
    }
    printf("output: %d", count);

}
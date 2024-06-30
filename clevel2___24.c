//Question: Write a program get number from user 
//print the total number of two-digit 
//perfect square numbers in the number.
//Answer: 
//Input: 163496481 - Output: 4
//Input: 364925 - Output: 4
#include<stdio.h>
#include<math.h>
int main()
{
    int x,temp,c=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while (x>0) {
        temp=x%100;
        if(temp>=16 && temp<=81) {
            int sqrtTemp = (int)sqrt(temp);
            if(sqrtTemp*sqrtTemp == temp){
            c++;
            }
        }
        x=x/10;
    }
    printf("Total count of Two digit perfect square numbers: %d",c);
}
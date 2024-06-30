//Question: Write a program to print the total count of numbers 
//which are less than 100000 and whose sum of digits is 14.
#include<stdio.h>
int main()
{
    int i,c=0;
    for(i=1;i<100000;i++){
    int num=i;
    int sum=0;
    while(num>0){
    sum += num%10;
    num= num/10;
    if(sum==14){
    c++;}}}
    printf("count=%d\n",c);
    return 0;
}
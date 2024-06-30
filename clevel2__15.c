//Question: Write a program to get a number from user and if the last digit of the 
//number is even print the same number. If the last digit of the number is 
//odd then subtract 1 from the last digit and print the number. 
//(Note: Last digit -MSB)
//Answer: 
//Input : 123456 - Output – 123456
//Input : 96895439- Output – 76895439
//Input : 675 – Output - 575
#include<stdio.h>
int main () {
    int x,fd,ld,num,mul=1;
    printf("Enter a number: ");
    scanf("%d",&x);      //x=675
    num=x;    //num=675
    ld=x%10;    //ld=5
    while(num>9) {    //    T       T            F
        num =num/10;    // 67     6
        mul=mul*10;    //    10     100
    }
    if(ld%2  ==  0) {    //F
        printf("%d",x);
    }
    else {
        x=x-mul;            //675-100=575
        printf("%d",x);
    }
}
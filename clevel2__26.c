//Question: Write a program to print biggest 4-digit number 
//which is divisible by 7 and 9.

#include <stdio.h>
int main() {
    int max_num = 0;
    for (int i = 9999; i >= 1000; i--) {
        if (i % 7 == 0 && i % 9 == 0) {
            max_num = i;
            break;
        }
    }
    printf("Biggest 4-digit number divisible by 7 and 9: %d\n", max_num);
    return 0;
}
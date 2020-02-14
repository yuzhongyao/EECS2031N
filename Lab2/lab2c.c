/**
    EECS 2031 Lab 2 
    January 21, 2020
    Yu Zhong Yap
    215472616
    yao21
*/
/*
    input a line of characters 
    return number of digits and the sum of those digits

*/

#include<stdio.h>
#include<ctype.h>
main(){
    int count = 0;
    int sum = 0;
    char c;
    c = getchar();

    while(c != '\n'){
        if(isdigit(c)){
            sum += c - 48;
            count++;
        }
        c = getchar();
    }
    
    printf("%d\t%d\n", count, sum);
}
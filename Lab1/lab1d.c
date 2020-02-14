/*  Yu Zhong Yao 
    EECS: yao21
    215472616
    Lab 1 Jan 14, 2020 5-7*/
#include<stdio.h>
main(){
    
    char c = getchar(); 
    int numOfSpaces = 0;      /*number of spaces*/
    while((c = getchar()) != '\n'){ /*if next char is not an enter key, count number of spaces*/
        if(c == ' '){
            numOfSpaces++;
        }
    }
    printf("%d \n", numOfSpaces); /*print integer count of spaces*/
}
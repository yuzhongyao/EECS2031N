/**
    EECS 2031 Lab 2 
    January 21, 2020
    Yu Zhong Yap
    215472616
    yao21
*/
/*
    input elements into array with length 100;
    return maximum  and minumum element value in array

*/
#include<stdio.h>
main(){
    int array[100];
    int i;
    int num;
    int min = 0;
    int max = 0;

    for(i = 0; i < 100; i++){
        scanf("%d", &num);
        array[i] = num;
        if(num < min){
            min = num;
        }
        if(num > max){
            max = num;
        }
        if(num == 0){
            break;
        }
    }

    printf("%d\t%d\n", max, min);
}
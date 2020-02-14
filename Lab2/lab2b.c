/********************************************
*EECS2031 Lab 2
*Yu Zhong Yao 215472616
*yao21
*yao21@my.yorku.ca
*********************************************/

#include<stdio.h>
main(){
    int array[100];
    int min = 0;
    int max = 0;
    int num = 1;
    int i;

    for(i = 0; i < 100 && num != 0; i++){
        printf("Enter the next array element>");
        scanf("%d", &num);
        array[i] = num;
        if(num > max){
            max = num;
        }
        else if(num < min){
            min = num;
        }
        
    }
    printf("%d \t %d \n", max, min);
}
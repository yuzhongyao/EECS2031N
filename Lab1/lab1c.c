/*  Yu Zhong Yao 
    EECS: yao21
    215472616
    Lab 1 Jan 14, 2020 5-7*/
#include<stdio.h>
main(){

    float i = 1;    
    while(i != 0){  /*receive user input of inches as float and convert into centimetres*/
        scanf("%f", &i);
        i = i * 2.54;
        if(i != 0){
            printf("%.2f cm\n", i); /*print conversion*/
        }
    }
}



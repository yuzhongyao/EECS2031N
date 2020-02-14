/******************************************
*EECS2031 - Lab 3
*Filename: lab3b.c
*Author: Yao, Yu Zhong
*Email: yao21@my.yorku.ca
*EECS login ID: yao21
*
*
*/
#include <stdio.h>

#define MAX_SIZE 100
char * reversed(char array[], int counter);
main() {

   char my_strg[MAX_SIZE + 1 ];
    char c;
    int i = 0;
    int counter = 0;
    c = getchar();
   /********** Fill in your code here. **********/
    
    while(c !='\n' && counter < MAX_SIZE){
        my_strg[counter] = c;
        c = getchar();
        counter++;
    }
    if(c == '\n'){
        my_strg[counter] = '\0';
    }
    for(; i < MAX_SIZE; i++){
        if(counter == MAX_SIZE){
            my_strg[counter] = '\n';
        }
        if(counter - i == 1 || counter == i){
            break;
        }
         char temp = my_strg[counter - 1];
         my_strg[counter - 1] = my_strg[i];
         my_strg[i] = temp;
         counter--;

        
    }
    printf( "%s\n", my_strg );  /* output the reversed string */
}
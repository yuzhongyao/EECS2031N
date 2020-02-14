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

main() {

   char my_strg[ MAX_SIZE ];   /* to store an octal number in the form of an array of char */
   int my_int = 0;
   int j = 1;
   int i = 0;
   int counter = 0;
   int run = 1;
   int isNegative = 0;
   /********** Fill in your code here. **********/
    char c = getchar(); 
    while(c != '\n'){
        if(c == 45){
            isNegative = 1;
        }
        else if(c < 48 || c > 55){
            printf("ERROR: NOT AN OCTAL NUMBER \n");
            run = 0;
            break;
        }
        if(counter == MAX_SIZE){
            my_strg[counter] = '\0';
            break;
        }
        my_strg[counter] = c;
        counter++;
        c = getchar();
    }

    if(run != 0){

            for(counter; counter > 0 + isNegative; counter--){
            int converted = my_strg[counter - 1] - '0';
            my_int = my_int + (converted *  j);
            j *= 8;
            }
            if(isNegative == 1){
                my_int = my_int - 2 * my_int;
            }
            
    }


   printf( "%d\n", my_int );  /* output the decimal integer */
}

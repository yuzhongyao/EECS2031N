/**************************************************
*   EECS2031 - Lab 4
*   Filename: lab4b.c
*   Author: Yao, Yu Zhong
*   Email: yao21@my.yorku.ca
*   EECS login ID: yao21
*
*
***************************************************/
#include <stdio.h>

#define MAX_SIZE 100


void converToDouble(char *s );

main() {

   char my_strg[ MAX_SIZE ];
   double my_number = 0.0;
    

   /********** Add your code below this line **********/
    char c = getchar();
    int i = 0;
    int count = 0;
    int divide = 0;
    double divTen = 10;
    double pointPart = 0.0;
    //Get user input into string
    while(c != '\n'){
       my_strg[i] = c;
       i++;
       count++;
       c = getchar();
    }
   i = 0;
   //iterate through string and convert to double
   for(i; i < count; i++){
      if(my_strg[i] == '.'){
         divide = 1;
         continue;
      }
      if( !divide ){
         my_number = my_number * 10 + ((double) my_strg[i] - '0');
      }
      if(divide) {
         pointPart +=  ((double) my_strg[i] -'0' ) / divTen;
         divTen *= 10;
      }
   }

    
   my_number += pointPart;

   /********** Add your code above this line **********/
   
    
   printf( "%.2f\n", my_number );
}

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

int convert(char c);
char * getInput(char c);
main() {

   char my_strg[ MAX_SIZE ];   /* to store a hexadecimal number in the form of an array of char */
   int my_int;
   int i = 0;
   int run = 1;
   int hexExp = 1;
   int converted = 0;
   int isNegative = 0;

   /********** Fill in your code here. **********/

  /* output the decimal integer */
   char c = getchar();

   while(c != '\n'){
      if(c == 45){
         isNegative = 1;
         c = getchar();
         continue;
      }
      if(i == MAX_SIZE){
         my_strg[i] = '\0';
         break;
      }
      
      else if(!((c < 58 && c > 47) || (c > 64 && c < 71) || (c > 96 && c < 103))){
         printf("NOT A HEXADECIMAL NUMBER \n");
         run = 0;
         break;
      }

         my_strg[i] = c;
         i++;
         c = getchar();
   }

   if(run != 0){
      for(i; i > 0 ; i--){
         if(my_strg[i - 1] > 47 && my_strg[i - 1] < 58){
            converted = my_strg[i - 1] - '0';
            converted *= hexExp;
            my_int += converted;
            hexExp *= 16;
         }
         else{
            converted = convert(my_strg[i - 1]);
            my_int += converted * hexExp;
            hexExp *= 16;
         }
      }
      if(isNegative == 1){
         my_int = my_int - 2 * my_int;
      }
   }

   printf("%d\n", my_int);

}


int convert(char c){
   int hexConverted = 0;
   switch(c){
      case 'a':
      case 'A':
         hexConverted = 10;
         break;
      case 'b':
      case 'B':
         hexConverted = 11;
         break;
      case 'c':
      case 'C':
         hexConverted = 12;
         break;
      case 'd':
      case 'D':
         hexConverted = 13;
         break;
      case 'e':
      case 'E':
         hexConverted = 14;
         break;
      case 'f':
      case 'F':
         hexConverted = 15;
         break;

   }
   return hexConverted;
}


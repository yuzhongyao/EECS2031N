/**************************************************
*   EECS2031 - Lab 4
*   Filename: lab4a.c
*   Author: Yao, Yu Zhong
*   Email: yao21@my.yorku.ca
*   EECS login ID: yao21
*
*
***************************************************/



#include <stdio.h>

#define MAX_SIZE 500

void myStrInput ( char *s );
int myStrCmp( char *s1, char *s2 );

main() 
{

   char strg1[ MAX_SIZE ], strg2[ MAX_SIZE ];

   /* Input strings strg1 and strg2. */
   /* Assume that the length of each input string is less than 100 characters. */
    




   myStrInput( strg1 );
   myStrInput( strg2 );
   printf( "%d\n", myStrCmp( strg1, strg2 ));
}


/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/


/* Function myStrInput
   Input: an array of char pointed to by pointer s.
   Output: the same array that stores the user's input string.
   Note: The length of each input string is less than the array size. 
   So no error checking for the string length is required. 
   Do not modify the function definition.
 */

void myStrInput ( char *s )
{

   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays. */
   /* Do not use any C library functions, except getchar(). */
	



    char *p;
    p = s;
    char c = getchar();
    while(c != '\n'){
        *p = c;
        c = getchar();
        p++;
    }
  
}



/* Function myStrCmp
   Input: two strings pointed to by pointers s1 and s2.
   Output: returns the first position (array index) where the two strings differ. 
   Special cases:
   1. Two strings are equal: returns -1.
   2. One string is a substring of the other (e.g., "CSE2031" and "CSE2031E3.0"):
	returns the length of the shorter string.
   Do not modify the function definition.
 */

int myStrCmp( char *s1, char *s2 )
{

   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays. */
   /* Do not use any C library functions. */
    int sameLength = 0;
    int differ = 0;
    int trueOrFalse = 1;
    char *p;
    char *p2;
    p = s1;
    p2 = s2;
    while(*p2 != '\0'){
        if(*p == *p2){
            sameLength++;
            differ++;
            p++;
            p2++;
        }
        else{
            trueOrFalse = 0;
            return differ;
        }
    }

    if(trueOrFalse){

        return -1;
    }

}


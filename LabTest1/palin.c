/***********************************
* EECS2031 - Lab Test 1
* Filename: palin.c
* Author: Yao, Yu Zhong
* Email: yao21@my.yorku.ca
* Login ID: yao21
************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void myStrInput ( char *s );
int palindrome( char *s );

main()
{
   char strg[ MAX_SIZE ];
   myStrInput( strg );
   printf( "%s\n", palindrome( strg ) ? "YES" : "NO" );
}



/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/



/************* YOU MAY ADD YOUR OWN FUNCTION(S) HERE **************/


/* Function myStrInput
   Input: an array of char pointed to by pointer s.
   Output: the same array that stores the user's input string.
   Input a string using a loop and getchar().
   The input is terminated by a newline character '\n', which does not belong to the string.
   To enter an empty string, just press Enter ('\n').
   Note: The length of each input string is less than the array size.
   So no error checking for the string length is required.
   Do not modify the function definition.
 */

void myStrInput ( char *s )
{

   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays, or call functions that you write. */
   /* Do not use any C library functions, except getchar(). */
    char c = getchar();
    while(c != '\n'){
        *s = c;
        s++;
        c = getchar();
    }
    *s = '\0';
}



/* Function palindrome
   Input: a string pointed to by pointer s.
   Output: returns 1 if the input string is a palindrome;
                returns 0 otherwise
   An empty string is considered a palindrome.
   Do not modify the function definition.
 */



int palindrome( char *s )
{

   /* Add your code here. */
   /* Do not use array indexing. */
   /* You may define additional variables, except arrays, or call functions that you write. */
   /* Do not use any C library functions. */
    int result = 1;
    int i = 0;
    int boolean = 1;
    char *l;
    l = s;
    for(i; i < MAX_SIZE; i++){
        if(*l == '\0'){
            i--;
            l--;
            break;
        }
        l++;
    }
    
    while(s <= l){
        if((*s > 64 && *s < 91) && *l == *s + 32){
            s++;
            l--;
            continue;
        }
        if((*s > 96 && *s < 123) && *l == *s - 32){
            s++;
            l--;
            continue;
        }
        if(*s != *l){
            char a = *s;
            char b = *l;
            result = 0;
            break;
        }
        else{
            l--;
            s++;
        }
        
        

    }




   return  result;     /* replace this line with your own code */


}

/*************************** END OF FILE ****************************/


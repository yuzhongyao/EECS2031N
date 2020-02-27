/***********************************
* EECS2031 - Lab Test 1
* Filename: econvert.c
* Author: Yao, Yu Zhong
* Email: yao21@my.yorku.ca
* Login ID: yao21
************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 500

void myStrInput ( char *s );
double str2float ( char *s );

main()
{
   char strg[ MAX_SIZE ];
   myStrInput( strg );
   printf( "%.15lf\n", str2float( strg ) );
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
   /* You may define additional variables, or call functions that you write. */
   /* Do not use any C library functions, except getchar(). */
   /* You may use either array indexing or pointers or both in this program. */
    char c = getchar();
    while(c != '\n'){
        *s = c;
        s++;
        c = getchar();
    }


}



/* Function str2float
   Input: a string pointed to by pointer s.
   Output: returns the floating-point number represented by string s.
   Do not modify the function definition.
 */






double str2float( char *s )
{

   /* Add your code here. */
   /* You may define additional variables, or call functions that you write. */
   /* Do not use any C library functions. */
   /* You may use either array indexing or pointers or both in this program. */
    int i = 1;
    
    double sum = 0.0;
    double exp = 1.0;
    double a = 0.0;
    if(*s == '-'){
        s++;
        while(*s != 'e' && *s != 'E'){
            sum = sum * 10 + *s - '0';
            s++;
        }
        sum *= -1;
        s++;
            if(*s == '-'){
            s++;
            while(*s != '\0'){
                a = a * 10 + *s - '0';
                s++;
            }
            for( i; i <= a; i++){
                exp = exp * 10;
            }
            return (sum / exp);
        }
            else{
            if(*s == '+'){
            s++;
        }
            while(*s != '\0'){
                a = a * 10 + *s - '0';
                s++;
            }
            for( i; i <= a; i++){
                exp = exp * 10;
            }
            return (sum * exp);
        }
        }
    
    else{
        if(*s == '+'){
            s++;
        }
        while(*s != 'e' && *s != 'E'){
            sum = sum * 10 + *s - '0';
            s++;
        }
        s++;
        if(*s == '-'){
            s++;
            while(*s != '\0'){
                a = a * 10 + *s - '0';
                s++;
            }
            for( i; i <= a; i++){
                exp = exp * 10;
            }
            
            return (sum / exp);
        }
        else{
             if(*s == '+'){
            s++;
        }
            while(*s != '\0'){
                a = a * 10 + *s - '0';
                s++;
            }
            for( i; i <= a; i++){
                exp = exp * 10;
            }
            return (sum * exp);
        }
    }

    
    






   return(0);   /* replace this line with your own code */
}



/**************************** END OF FILE ****************************/



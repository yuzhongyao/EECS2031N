/***********************************
* EECS 2031 - Lab 6  
* Filename: calc.c  
* Author: Yao, Yu Zhong    
* Email: yao21@my.yorku.ca
* Login ID: yao21
************************************/


#include <stdio.h>
#include <stdlib.h>


  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/
int stringToInt(char* s);

/* Implement a simple calculator.
   Input: two operands and one operator as command-line arguments.
   Output: the result displayed on the standard output.
 */

void main( int argc, char *argv[] )
{
  int result = 0;  /* stores the result of the arithmetic operation */


  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/
    //prints how to use if input is incorrect
    if(argc != 4){
        printf("Usage: calc [Operand_1] [Operator] [Operand_2]\n");
    }
    else{

        char * p;
        p = argv[1];
        int op1 = stringToInt(p);
        p = argv[3];
        int op2 = stringToInt(p);
        p = argv[2];
        if(*p == '+'){
            result = op1 + op2;
        }
        else if (*p == '-'){
            result = op1 - op2;
        }
        else if (*p == '/'){
            result = op1 / op2;
        }
        else if(*p == '%'){
            result = op1 % op2;
        }
        else{
            result =  op1 * op2;
        }
   




  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf( "%d\n", result );
}
}
/**
 * converts string input to integer
 *
 * */
int stringToInt(char * s){
    int tmp = 0;
    int neg = 1;
    if(*s == '-'){
        neg = -1;
        s++;
    }
    while(*s != '\0'){
        tmp = tmp * 10 + (*s - '0');
        s++;
    }
    return (tmp * neg) ;
}
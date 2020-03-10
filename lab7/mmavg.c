/***********************************
* EECS 2031 - Lab 7		   
* Filename: mmavg.c	  	
* Author: Yao, Yu Zhong	    
* Email: yao21@my.yorku.ca	 	
* Login ID: yao21	
************************************/


#include <stdio.h>
#include <stdlib.h>


  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/
//compares to see which integer is larger
int compare(int a, int b);
//Prints error message 
//Proper Syntax
void printErr(char *s);
//Converts string to integer
int stringToInt (char *c);
/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */

main( int argc, char *argv[] )
{
  int max, min;
  float avg;
  

  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/
    int count = 0;
    int i = 1;
    int current;
    //check if there is proper amount of inputs
    if(argc <= 1){
        printErr("Usage: mmavg int1 int2 int3 ...");
        exit(1);
    }
    else{
        
        while(i != argc){
            current = stringToInt(argv[i]);
            if(i == 1){
                max = current;
                min = current;
            }
            if(!compare(max, current)){
                max = current;
            }
            if(compare(min, current)){
                min = current;
            }
            avg += current;
            count++;


           i++;
        }
        avg /= count;

    }


  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/

  printf( "%d %d %.2f\n", max, min, avg );
}

int compare(int a, int b){

    if(a >= b){
        return 1;
    }
    else 
    {
         return 0;
    }

    
}



int stringToInt(char * c){
    int ret = 0;
    int neg = 1;
    while(*c != '\0'){
        if(*c == '-'){
            neg = -1;
            c++;
        }
        else if(*c == '+'){
            neg = 1;
            c++;
        }
        else{
        ret = ret * 10 + (*c - '0');
        c++;
        }
    }

    return ret * neg;
}
void printErr(char *s){
    printf("%s\n", s);
}
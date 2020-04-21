/***********************************
* EECS 2031 - Lab 7		   
* Filename: marks.c  	
* Author: Yao, Yu Zhong    
* Email: Yao21@my.yorku.ca 	
* Login ID: Yao21	
************************************/

#include <stdio.h>
#include <stdlib.h>


  /*****  YOU MAY ADD YOUR OWN FUNCTION(S) HERE.  *****/

void main( int argc, char *argv[] )
{


  /*****************************************/
  /***** ADD YOUR CODE BELOW THIS LINE *****/
  //check if user input is correct else print instructions
  if(argc != 3){
    printf("Usage: marks [input_file] [output_file]\n");
    exit(1);
  }
  //initialize file pointers 
  FILE *read, *write;
  read = fopen(argv[1], "r");
  write = fopen(argv[2], "w");
  //if either are null then print error message
  if(read == NULL){
    printf("Error: File %s cannot be read.",read);
    exit(1);
  }
  if(write == NULL){
    printf("Error: cannot write to File $s.", write);
    exit(1);
  }

  //
  char *first;
  char *last;
  int asg1 = 0;
  int asg2 = 0;
 
  //reads from read file and outputs to write file with average calculated at the end
  while(fscanf(read,"%s %s %d %d", &first,  &last, &asg1, &asg2) != EOF){
    double avg = (double)(asg1 + asg2) / 2;
    fprintf(write,"%s %s %d %d %.1f\n", &first, &last, asg1, asg2, avg);
  }

  
  fclose(read);
  fclose(write);
  







  /***** ADD YOUR CODE ABOVE THIS LINE *****/
  /*****************************************/

}  /* end main */



/**************************************************
*   EECS2031 - Lab 4
*   Filename: lab4c.c
*   Author: Yao, Yu Zhong
*   Email: yao21@my.yorku.ca
*   EECS login ID: yao21
*
*
***************************************************/
#include <stdio.h>

void power_of_ten( int k, double* my_double )
{

   /* Add your code here */
   int i;
   if(k == 0){
      *my_double = 1; 
   }
   else if(k == 1){
      *my_double = 10;
   }
   else if(k > 1){
      *my_double = 10;
      for(i = 1; i < k; i++){
         *my_double *= 10;
      }
   }
   else {
      *my_double = 1;
      for(i = 0; i > k; i--){
         *my_double /= 10;
      }
   }





}  /* end power_of_ten */

main()
{
   int k;
   double my_double;
   double *p;
   p = &my_double;
   printf("Enter an integer>");
   scanf( "%d", &k );
   
   power_of_ten( k, p );
   /* Hint: my_double must be passed by reference (i.e., using a pointer). */
   
   /* Do not modify the following line. */
   printf( "%.15lf\n", my_double );
}
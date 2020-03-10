/***********************************
* EECS2031 - Assignment 1
* Filename: poly.c 
* Author: Yao, Yu Zhong
* Email: yao21@my.yorku.ca
* Login ID: yao21
************************************/

#include "poly.h"


/* 
  Initialize all coefficients and exponents of the polynomial to zero.
 */
void init_polynom( int coeff[], int exp[ ] )
{

   /* ADD YOUR CODE HERE */
   int i = 0;
   while(i != 50){
      exp[i] = 0;
      coeff[i] = 0;
      i++;
   }

}  /* end init_polynom */


/*
  Get inputs from user using scanf() and store them in the polynomial.
 */
void get_polynom( int coeff[ ], int exp[ ] )
{

   /* ADD YOUR CODE HERE */
    
    char * n; 
    scanf("%d", &n); //place user input into n
    int terms = (int) n;
    int i = 1;
    int c = 0; // index for coeff[]
    int e = 0; // index for exp[]
    for(i; i < 2 * terms + 1; i++){
        /**Since the input is in [number of terms] [coefficient k] [exponent k], it alternates between coefficient and exponent
        * I have indices for both exp[] and coeff[] and increment it depending on whether i is at a coefficient input or exponent input
        */
        scanf("%d", &n);
        if(i % 2 == 0){
            exp[e] = n;
            e++;
        }
        else{
            coeff[c] = n;
            c++;
            
            
        }
    }

    

}  /* end get_polynom */

/**
   Convert integer to char and input the char into the string s
   returns number of indices that integer has taken up in String s;
*/
int intToChar(int index, int c, char s[]){
   int rem = 0;
   int tmp = c; 
   int count = 0;
   int iI = index;
   while(tmp != 0){
      rem = tmp % 10;
      s[index++] = rem + '0';
      count++;
      tmp /= 10;
   }
   while(--index > iI){
      char p = s[index];
      s[index] = s[iI];
      s[iI] = p;
      index--;
      iI--;
   }

   return count;
}


/*
  Convert the polynomial to a string s.
 */
void polynom_to_string( int coeff[ ], int exp[ ], char s[ ] )
{
   /* ADD YOUR CODE HERE */
   int q = 0;
   for(q; q < ASIZE; q++){
      s[q] = 0;
   }
   int i = 0;
   int si = 0;
   while(coeff[i] != 0){

      if(coeff[i] < 0){
      s[si++] = '-';
      si += intToChar(si, coeff[i] * -1,s);
   }
      if(coeff[i] > 1){
         si += intToChar(si, coeff[i], s);
      }
      if(coeff[i] == 1){

      }
      if(exp[i] == 1){
         s[si++] = 'x';
      }
      if(exp[i] > 1){
         s[si++] = 'x';
         s[si++] = '^';
         si += intToChar(si, exp[i], s);
      }
      if(exp[i] < -1){
         s[si++] = 'x';
         s[si++] = '^';
         s[si++] = '-';
         si += intToChar(si, exp[i] * -1, s);
      }
      if(coeff[i + 1] > 0){
         s[si++] = '+';
      }
      i++;
   }
  

}  /* end polynom_to_string */

/**
 * returns the value of a given number x raised to the power of exp
 * 
 * */
double power(double x, double exp){
   double tmp = 1;
   double i = 0.0;

   if(exp > 0){
      for(i; i < exp; i++){
         tmp *= x;
      }
      return tmp;
   }
   else{
      tmp = 1;
      for(i = exp; i < 0; i++){
         tmp /= x;
      }
      return tmp;
   }
}
/*
  Evaluate the polynomial for the value of x and store the result p(x) in variable result.
 */
void eval_polynom( int coeff[ ], int exp[ ], double x, double *result )
{

   /* ADD YOUR CODE HERE */

   int i = 0;
   double tmp = 0.0;
   while(i < ASIZE){
      tmp += coeff[i] *  power(x, exp[i]);
      i++;
   }
   *result = tmp;
}  /* end eval_polynom */


/**
 * 
 * 
 * */
/*
  Add two polynomials and the result is stored in the first polynomial (arrays co1[] and ex1[]).
 */
void add_polynom( int co1[ ], int ex1[ ], int co2[ ], int ex2[ ] )
{

   /* ADD YOUR CODE HERE */
   int i = 0;
   int j = 0;
   int k = 0;
   int C[ASIZE];
   int E[ASIZE];
   init_polynom(C,E);

   for(i; i < ASIZE; i++){
      
      if(co1[j] == 0){
         C[i] = co2[k];
         E[i] = ex2[k];
         k++;
      }
      else if(co2[k] == 0){
         C[i] = co1[j];
         E[i] = ex1[j];
         j++;
      }
      else if(ex1[j] < ex2[k]){
         C[i] = co2[k];
         E[i] = ex2[k];
         k++;
      }
      else if(ex1[j] > ex2[k]){
         C[i] = co1[j];
         E[i] = ex1[j];
         j++;
      }
      //exp are equal
      else{
         if(co1[j] + co2[k] == 0){
            j++;
            k++;
            
         }
         else{
            C[i] = co1[j] + co2[k];
            E[i] = ex1[j];
            j++;
            k++;
         }
      }
   }

   for(i = 0; i < ASIZE; i++){
      co1[i] = C[i];
      ex1[i] = E[i];
   }
}  /* end add_ polynom */


/************************** END OF FILE ***************************/






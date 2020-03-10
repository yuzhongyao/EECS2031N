/***********************************
* EECS2031 - Lab Test 1
* Filename: econvert.c
* Author: Yao, Yu Zhong
* Email: yao21@my.yorku.ca
* Login ID: yao21
************************************/

#include <stdio.h>
#include <stdlib.h>
#include "list.h"


List *head, *tail;


/* Display an error message. */

void prtError( char *errMsg )
{
   printf( "%s \n", errMsg );
}


/* Print the content of the list (ignoring the dummy node). */

void prtList()
{
   List *p;
   for ( p = head->next; p != NULL; p = p->next )
        printf( "%4d", p->data );
   printf( "\n");
}



/* Initialize the list. */
/* Create a dummy node to simplify insertion and deletion. */
/* After the list is created, pointers head and tail both point to the dummy node. */
/* Return NULL if a node cannot be created. */
/* Otherwise, return the pointer to the dummy node. */

List *init()
{
   head = ( List * ) malloc( sizeof( List ) );
   if ( head == NULL ) {
      prtError( "Insufficient memory!" );
      return( NULL );
   }
   head->data = -1;
   head->next = NULL;
   tail = head;
   return ( head );
}





/************* DO NOT MODIFY ANYTHING ABOVE THIS LINE, *************/
/************* EXCEPT THE HEADER CONTAINING YOUR INFO **************/

/* Insert a new data element d into the list. */
/* Insert at the front of the list, right behind the dummy node. */
/* Return NULL if a new node cannot be created. */
/* Otherwise, return the pointer to the newly created node. */

List *insertFirst( int d )
{
   /***** ADD YOUR CODE HERE *****/
   List *node;
   node = (List *) malloc (sizeof(List));
      if(node == NULL){
         prtError("Insufficient memory!");
         return NULL;
      }
      node->data = d;
      node->next = head->next;
      head->next = node;
}



/* Insert a new data element d into the list. */
/* Insert at the end of the list. */
/* Return NULL if a new node cannot be created. */
/* Otherwise, return the pointer to the newly created node. */

List *insertLast( int d )
{

   /***** ADD YOUR CODE HERE *****/
   List * node;
   node = (List*) malloc(sizeof(List));
   if(node == NULL){
      prtError("Insufficient memory");
      return NULL;
   }
   List *tmp;
   tmp = head;
   node->data = d;
   node->next = NULL;
   if(head->next == NULL){
      head->next = node;
      tail = node;
      return node;
   }
   
   while(tmp->next !=NULL){
      tmp = tmp->next;
   }
   tmp->next = node;
   tail = node;
   return node;
   
   
}



/* Remove the first element of the list, i.e., the node right behind the dummy node. */
/* Return -1 if the list is empty, i.e., containing only the dummy node, */
/* and display error message "Empty list!" on the standard output. */
/* Otherwise, return the data (integer) of the node to be remove. */

int removeFirst()
{

   /***** ADD YOUR CODE HERE *****/
   List * tmp;
   int ret;
   if(head->next == tail->next){
      prtError("Empty list!");
      return -1;
   }
   ret = head->next->data;
   tmp = head->next;
   head->next = tmp->next;
   free(tmp);
   return ret;
   }


/* Search the list for an element containing integer k. */
/* If found, return the pointer to that element.  Otherwise, return NULL. */
/* If there is more than one element containing k, return the pointer to the first encountered element. */

List *search( int k )
{

   /***** ADD YOUR CODE HERE *****/
   List * node;
   node = head;
   while(node->next != NULL){
      if(node->data == k){
         return node;
      }
      node = node->next;
   }
   return NULL;
}


/*************************** END OF FILE ***************************/


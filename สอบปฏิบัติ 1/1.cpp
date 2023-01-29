//นาย กิตติพงษ์ ปาลี 65543206005-2
//https://youtu.be/L7zlCMRhktg
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    int data ;
    struct Node *next ;   
}node;

void AddNode( node **start , int data ) ;
void ShowAll( node *start ) ;

void UpdateNode( node **start , int search , int newdata ) ;
void SwapNode( node **start , int data1 ,int data2) ;
void ShowBack( node *start ) ;

int main () 
{
    node *start , *now; 
    start = NULL ;
    AddNode( &start, 10 ) ;
    AddNode( &start, 20 ) ;
    AddNode( &start, 30 ) ;
    AddNode( &start, 40 ) ;
    ShowAll( start ) ;
    UpdateNode( &start, 10 , 99 ) ;
    ShowAll( start ) ;
    ShowBack( start ) ;
    SwapNode( &start , 20 , 30) ;
    ShowAll (start) ;
    
    return 0 ;
}//end main

void AddNode( node **start, int data )
{
	while(*start != NULL){
		start = &(*start)->next ;
	}//end while

	*start = new struct Node ;
	(*start)->data = data ;
	(*start)->next = NULL ;
}//end AddNode

void ShowAll( node *start ) 
{
  while( start != NULL ) {
    printf( "%d ", start->data ) ;
    start = start->next ;
  }//end while
  printf( "\n" ) ;
}//end ShowAll

//////////////////////////////////////////////////////////////////////////////

void UpdateNode( node **start, int search, int newdata ) 
{
  node *newNode = *start ; 
  while( newNode != NULL && newNode->data != search ) 
    newNode = newNode->next ;
  if( newNode != NULL ) newNode->data = newdata ;
}//end Update

void ShowBack( node *start ) 
{
    node *newnode , *nextnode ;
    if ( start != NULL ) {
        newnode = start ;
        nextnode = start->next ;
        start = start->next ;
        newnode->next = NULL ;
        while ( start != NULL ) {
            start = start->next ;
            nextnode->next = newnode ;
            newnode = nextnode ;
            nextnode = start ;
        }//end while
        start = newnode ;
    }//end if
    ShowAll( start ) ;
}//end ShowBack

void Swap( node **first, node **second ) 
{
  node *temp = *first ;
  *first = *second ; 
  *second = temp ;
}//end swap

void SwapNode( node **start, int data1, int data2 ) 
{
  if ( data1 == data2 ) 
  return ;

  node **first = start ;
  while( *first != NULL && ( *first )->data != data1 ) first = &( *first )->next ;

  node **second = start ;
  while( *second != NULL && ( *second )->data != data2 ) second = &( *second )->next ;

  if( first && second ) {
    Swap( first, second ) ;
    Swap( &( *first )->next, &( *second )->next ) ; 
  }
}//end SwapNode*/
#include<stdio.h>

//self referential structure 
typedef struct node 
{
    int data; 
    struct node *next; //self referential pointer 
}node_t; 

int main()
{
    node_t n1; 
    node_t n2;     
    return 0;
}

#include<stdio.h> 
struct student {
 char name[20];
 unsigned int age: 7;
 unsigned int roll: 6;
 unsigned int x : 22; 

};
// 20 bytes + 4 byte 
int main( )
{
    printf("%d ",sizeof(struct student)); //24 
    return 0; 
}
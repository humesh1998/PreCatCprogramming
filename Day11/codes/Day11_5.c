#include<stdio.h> 

int main( )
{
    //type qualifier => const , volatile 
    const int num = 10;  // OK 
    //const int num; 
    //num = 10; // NOT OK 
    printf("%d ",num); //10 
    //num = 50; // NOT OK 
    return 0; 
}
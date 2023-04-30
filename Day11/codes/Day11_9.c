#include<stdio.h> 

int main( )
{
    const int num2 = 10; 
    const int num = 10; 
    const int * const ptr = &num;
   //int const * const ptr = &num;
   //const int const * const ptr = &num;
//ptr is a constant pointer pointing to constant integer variable      
    //const int const *ptr const  = &num; // NOT OK 
    printf("num = %d",num); 
    printf("*ptr = %d",*ptr); 

    //*ptr = 20; // NOT OK 
    // ptr = &num2; // NOT OK 
    return 0; 
}
#include <stdio.h>
int main()
{
    int num = 10; 
    int num2 = 50; 
    int * const ptr = &num; 
//ptr is a constant pointer pointing to non constant int variable     
    //int * ptr const  = &num;   // NOT OK  
    printf("%d ",num); //10 
    printf("%d ",*ptr);//10 

    *ptr = 20;     

    printf("\n%d ",num); //20 
    printf("%d ",*ptr);//20 

    //ptr = &num2; // NOT OK 
    return 0;
}

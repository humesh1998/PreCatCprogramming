#include<stdio.h> 
int main()
{
    int a = 10; 
    int *p = &a; 

    printf(" %d\n",a); //10  
    printf(" %d\n",*p);//10 

    a = 20;   
    printf(" %d\n",a); //20  
    printf(" %d\n",*p);//20

    *p = 30;  
    printf(" %d\n",a); //30  
    printf(" %d\n",*p);//30

    return 0;
}

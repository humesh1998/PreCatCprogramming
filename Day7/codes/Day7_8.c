#include<stdio.h> 

int main( )
{
    //nested loops 
    //nested for loops

    // int i,j; 
    // for( i = 1 ; i<=5 ; i++)
    // {
    //      printf("for each i : %d\n",i); 
    //      for(j = 1; j<=5 ; j++)//j=1
    //      {
    //             printf("       j:%d",j); 
    //      }   
    //     printf("\n"); 
    // }

    // int i,j,k; 
    // for( i = 1 ; i<=5 ; i++)//i=1,2,3
    // {
    //      printf("for each i : %d\n",i); 
    //      for(j = 1; j<=5 ; j++)//j=1
    //      {
    //           printf("for each j : %d\n",j); 
    //           for(k = 1; k<=5 ; k++)//k =1....5 6
    //           {
    //                 printf("       k:%d",k); 
    //           }
    //           printf("\n"); 
    //      }   
    //     printf("\n\n"); 
    // }

    int i,j,k; 
    for( i = 1 ; i<=5 ; i++); 
    {


         printf("i : %d\n",i); // 6

         for(j = 1; j<=5 ; j++); 
         
         {
              printf("\n k: %d\n",j); //6  
              for(k = 1; k<=5 ; k++); 
              
              
              {
                    printf("\nk:%d",k);//6  
              }
              printf("\n"); 
         }   
        printf("\n\n"); 
    } 
    return 0; 
}
/*
    i=1 

    j=1
        k=1,2,3,4,5
    j=2
        k=1,2,3,4,5
    j=3
        k=1,2,3,4,5
    j=4
        k=1,2,3,4,5
    j=5
        k=1,2,3,4,5            

    i = 2; 

    j=1
        k=1,2,3,4,5
    j=2
        k=1,2,3,4,5
    j=3
        k=1,2,3,4,5
    j=4
        k=1,2,3,4,5
    j=5
        k=1,2,3,4,5   

    i = 3; 

    j=1
        k=1,2,3,4,5
    j=2
        k=1,2,3,4,5
    j=3
        k=1,2,3,4,5
    j=4
        k=1,2,3,4,5
    j=5
        k=1,2,3,4,5    
*/
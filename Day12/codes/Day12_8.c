#include<stdio.h> 
//int arr[3][3]; // 0 
int main( )
{
    //2D array 
     int arr[3][3]= {1,2,3,4,5,6,7,8,9}; 
    //int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}}; 
    //int arr[3][3]= {{1,2},{4},{7,8,9}}; //partial init 
    //int arr[3][3]= {1}; //partial init 
    //int arr[3][3]; // Garbage
    //int arr[][3]= {1,2,3,4,5,6,7,8,9}; //OK 
    //int arr[3][]= {1,2,3,4,5,6,7,8,9}; //NOT OK 

    //int arr[][3];  //NOT OK 
    //int arr[][];  //NOT OK 
    //int arr[][] ={1,2,3,4,5,6,7,8};  //NOT OK 
    /*
        arr 
                  [0]   [1]   [2]
          [0]      1     2     3   
                  100   104   108  

          [1]      4     5     6   
                  112   116   120 

          [2]      7     8     9 
                  124   128   132  


    */
    //array of notation 
    // printf("%d ",arr[0][0]); //1 
    // printf("%d ",arr[1][1] );//5 
    // printf("%d ",arr[1][2] );//6 
    // printf("%d ",arr[2][0] );//7 

    int row,col; 
    for( row = 0 ; row < 3 ; row++)
    {
        for(col = 0 ; col < 3 ; col++)
        {
            printf("%4d ",arr[row][col]); 
        }
        printf("\n"); 
    }
    return 0; 
}
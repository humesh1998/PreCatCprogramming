#include<stdio.h> 
void printArray(int *a) ; 
int main()
{
    int arr[4] = {100,200,300,400}; 
    int i; 
    printArray(arr); //base address 
    printf("inside the function main :: "); 
    for( i = 0 ; i < 4 ; i++)
        printf("%d ",arr[i]);//101 201 301 401  
    
    return 0;
}

void printArray(int *a) // pointer notation 
{   
     printf("Inside the function \n"); 
     int i; 
     for( i = 0 ; i < 4 ; i++)
           printf("%d \n",a[i]); // *(a + i) 

     for( i = 0 ; i < 4 ; i++)
            ++a[i];  // *(a + i) => *(500 + 0 )=>*(500) => 100 => ++ => 101  
}


/*
        consider array index starts from 1 

        arr 

        10  20  30  40  50 
        [1] [2] [3] [4] [5]
        100 104 108 112 116 
        
        arr[1] => 10 

        *(arr + 1)
        *(100 + 1)
        *(100 + 1 * 4)
        *(104)
         20  

*/
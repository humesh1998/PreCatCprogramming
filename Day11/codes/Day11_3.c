#include<stdio.h> 
void printArray(int arr[]) ; 
int main()
{
    int arr[4] = {100,200,300,400}; 
    //arr++; // NOT OK  
    printArray(arr); //base address 
    return 0;
}

//void printArray(int *ptr) // pointer notation 
void printArray(int arr[]) // array notation 
{
    arr++; 
    //500 + 1 * 4 => 504 
    printf("%d",*arr); //valueat(504) => 200 
    printf("%d ",arr[-1]); //100 
    /*
            arr[-1]
            *(arr + -1)
            *(504 - 1)
            *(504 - 1 )
            *(504 - 1 * 4)
            *(504 - 4 )
            *(500)
            valueat(500) => 100 
    */
}


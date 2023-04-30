#include <stdio.h>
int main()
{
    const int num = 10;
    const int num2 = 30;
    const int *ptr = &num;
    //int const *ptr = &num;
    //const int const *ptr = &num;
    //ptr is a non constant pointer pointing to constant int variable

    printf("%d \n", num);  //10
    printf("%d \n", *ptr); // 10

    //*ptr = 30;// NOT OK
    //num = 30; // NOT OK
    ptr = &num2;           // OK
    printf("%d \n", *ptr); // 30
    return 0;
}

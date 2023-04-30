#include<stdio.h> 
int main()
{
    // strcmp( ); 
    // char str1[20] = "sunbeam"; // stack 
    // char str2[20] = "sunbeam"; // stack 
    // if(str1 == str2) // comparing the address 
    //     printf("same"); 
    // else 
    //     printf("not same"); 

    // pointer to string 
    //char *str1 = "info"; 
    //char *str2 = "info";
    // memory is allocated from RO ( read only ) data section  
    // if(str1 == str2)
    //   printf("same"); 
    // else 
    //  printf("not same"); 
    //printf("%s %s",str1,str2); 

    //char str3[20] = "ABCD"; // stack 
    //str3[0] = 'K'; // OK   
    //printf("%s",str3); // KBCD 


    // char *str3 = "info"; 
    // //puts(str3); // OK
    // str3[0] = 'K'; // NOT OK => str3[0] => *(str3 + 0);  
    // puts(str3); // NOT OK 
    // // runtime error 
    
    char str6[20] = "sunbeam"; 
    //printf("%s",str6); 

    printf(str6); //sunbeam 
    printf("\n");
    printf(str6 + 1 ); //unbeam 
    printf("\n");
    printf(str6 + 2 ); //nbeam 
    return 0;
}

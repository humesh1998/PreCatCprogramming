#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    FILE *fptr; 
    char ch; 
//A file pointer ( stream pointer ) is a pointer to a structure of type FILE 
//File pointer points to this structure ( identifies the file )    
    
    
    if((fptr = fopen("sunbeam.txt","r"))==NULL)
    {
        exit(1); 
    }
    while((ch = fgetc(fptr))!=EOF)
    {
            printf("%c",ch); 
    }
    fclose(fptr); 
    
    return 0;
}

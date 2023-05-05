#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    FILE *fptr; 
    char ch; 
//A file pointer ( stream pointer ) is a pointer to a structure of type FILE 
//File pointer points to this structure ( identifies the file )    
    
    
    if((fptr = fopen("sunbeam.txt","w"))==NULL)
    {
        exit(1); 
    }
    printf("Enter the character"); 
    while((ch = getchar( ))!=EOF)
    {
            fputc(ch,fptr); 
    }
    fclose(fptr); 
    
    return 0;
}

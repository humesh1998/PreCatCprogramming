#include<stdio.h>

struct X 
{
    int a; 
}; 
struct Y 
{
    int b; 
};
int main( )
{
    struct X a = {10}; 
    struct Y b; 
    //a = b; 
    return 0; 
}

// struct book 
// {
//     int id; 
//     char name[20]; 
//     char author[20]; 
// };
// int main()
// {
//     struct book b1 = {1, "Cprogramming","DennisRitchie"}; 
//     struct book b2; 
//     b2 = b1; 
//     printf("%d %s %s",b2.id,b2.name,b2.author);  
//     return 0;
// }

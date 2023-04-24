#include<stdio.h> 

int main( )
{
    //typedef => alias ( nickname )

    typedef int INTEGER;   
    int x; 
    INTEGER y;
    typedef INTEGER INT;
    INT z;   
    size_t m; // unsigned int m; 
    enum color
    {
        RED,BLUE,GREEN  
    }; 
    //typedef datatype      data-type-alias;
      typedef enum color    e_c;
      e_c c1,c2,c3;  
    return 0; 
}
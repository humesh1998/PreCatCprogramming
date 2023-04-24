#include<stdio.h>
// int main( void )
// {
// char i = 48;
// switch (i)
// {
// case '2': printf("SunBeam Karad");break; //case 50: 
// case '1': printf("SunBeam Market Yard");break; // case 49: 
// default : printf("SunBeam IT Park Hinjewadi");
// }
// // no case match so default case 
// return 0;
// }



// #include<stdio.h>
// int main( void )
// {
// int i=5;
// // 0 will get print on terminal 
// if (!printf("0")) // if(1)=>if(T)=>if(F)
// i = 3;
// else
// i = 5;
// printf("%d", i);//5 
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// char check = 'a'; //97 
// again:
// if(check) //if(97)
// {
// switch (check) // 97 
// {
//     // no matching case default case will execute 
// case ('a'=='b' || 1 ) : printf("PG-DAC "); break; //case 1: 
// case 0 && 'b'=='a' : printf("PG-DMC "); break; //case 0: 
// default : printf("PG-DITISS"); break; 
// }
// }
// else
// goto again;
// return 0;
// }


#include<stdio.h>
int main( void )
{
int x=101,y=202;
if(!(!x)&& x) // if(!T)=>if(!F)=>if(T && T ) => if(1)=>if(T)
printf("inside if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 1st netsed if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 2ed netsed if x=%d\n",x);
else
printf("inside else y=%d\n",y);
return 0;
} 
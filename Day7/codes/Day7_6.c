#include<stdio.h> 

int main( )
{
    enum operations 
    {
        ADD=1,SUB,MULT,DIV
    }; 
    int num1,num2,ans;
    enum operations choice;  
    
    do
    {
        
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n"); 

        printf("Enter the num1 and num2 :: "); 
        scanf("%d%d",&num1,&num2); 

        printf("\n Enter the choice ");
        scanf("%d",&choice);  
        switch (choice)
        {
        case ADD: 
            ans = num1 + num2; 
            //printf("%d",ans); 
            break;
        case SUB:   
            ans = num1 - num2; 
            //printf("%d",ans); 
            break;  
        case MULT: 
            ans = num1 * num2; 
            //printf("%d",ans); 
            break;
        case DIV: 
            ans = num1 / num2; 
            //printf("%d",ans); 
            break;
        default:
            printf("invalid choice"); 
            break;
        }
        printf("Result = %d \n",ans);
        printf("0 to exit and non-zero value to continue"); 
        scanf("%d",&choice); 
    }while(choice!=0); 
    return 0; 
}

// int main( )
// {
//     enum operations 
//     {
//         ADD=1,SUB,MULT,DIV
//     }; 
//     int num1,num2,ans;
//     enum operations choice;  
    
//     printf("1. Addition \n");
//     printf("2. Subtraction \n");
//     printf("3. Multiplication \n");
//     printf("4. Division \n"); 

//     printf("Enter the num1 and num2 :: "); 
//     scanf("%d%d",&num1,&num2); 

//     printf("\n Enter the choice ");
//     scanf("%d",&choice);  
//     switch (choice)
//     {
//     case ADD: 
//         ans = num1 + num2; 
//         //printf("%d",ans); 
//         break;
//     case SUB:   
//         ans = num1 - num2; 
//         //printf("%d",ans); 
//         break;  
//     case MULT: 
//         ans = num1 * num2; 
//         //printf("%d",ans); 
//         break;
//     case DIV: 
//         ans = num1 / num2; 
//         //printf("%d",ans); 
//         break;
//     default:
//         printf("invalid choice"); 
//         break;
//     }
//     printf("Result = %d",ans); 
//     return 0; 
// }
// int main( )
// {
//     int num1,num2,ans,choice;

//     printf("1. Addition \n");
//     printf("2. Subtraction \n");
//     printf("3. Multiplication \n");
//     printf("4. Division \n"); 

//     printf("Enter the num1 and num2 :: "); 
//     scanf("%d%d",&num1,&num2); 

//     printf("\n Enter the choice ");
//     scanf("%d",&choice);  
//     switch (choice)
//     {
//     case 1: 
//         ans = num1 + num2; 
//         //printf("%d",ans); 
//         break;
//     case 2:   
//         ans = num1 - num2; 
//         //printf("%d",ans); 
//         break;  
//     case 3: 
//         ans = num1 * num2; 
//         //printf("%d",ans); 
//         break;
//     case 4: 
//         ans = num1 / num2; 
//         //printf("%d",ans); 
//         break;
//     default:
//         printf("invalid choice"); 
//         break;
//     }
//     printf("Result = %d",ans); 
//     return 0; 
// }
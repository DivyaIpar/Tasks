#include <stdio.h>  
int main()  
{  
    char choice;  
    int n1, n2;   
    float res;  
    printf (" Enter yur choice (+, -, *, /) to perform the operation in C Calculator \n ");  
    scanf ("%c", &choice);  
    if (choice == '+' )  
    {  
        printf (" Your selection is: Addition");  
    }  
    else if (choice == '-')  
    {  
        printf (" Your selection is: Substraction");  
     }  
       
    else if (choice == '*')  
    {  
        printf (" Your selection is: Multiplication");  
     }  
        else if (choice == '/')  
    {  
        printf (" Your selection is: Division");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1);   
    printf (" Enter the second number: ");  
    scanf (" %d", &n2);   
      
    switch(choice)  
    {  
        case '+':  
            res = n1 + n2;  
            printf (" Addition of %d and %d is: %.2f", n1, n2, res);  
            break;  
          
        case '-':  
            res = n1 - n2;  
            printf (" Subtraction of %d and %d is: %.2f", n1, n2, res);  
            break;  
              
        case '*':  
            res = n1 * n2; 
            printf (" Multiplication of %d and %d is: %.2f", n1, n2, res);  
            break;            
          
        case '/':  
            if (n2 == 0)   
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            res = n1 / n2;   
            printf (" Division of %d and %d is: %.2f", n1, n2, res);  
            break;  
        default:   
            printf (" Something is wrong!! Please check the options ");               
    }  
    return 0;  
}  
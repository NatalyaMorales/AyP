/******************************************************************************

Created by Natalya Morales
Agust 29, 2022
This program is an introducction to C and learning variable types

*******************************************************************************/

#include <stdio.h> // Standar library 

int main() // Main program
{
    // Decalation of variables
    int a=512, b; // Integer numeric data
    float x=6.490, y=0.83667; // Real numeric data
    char letra='k'; // Character type data
    char palabra[]="Netbeans"; // string type data 
    
    /*This is a comment that 
    can span more than one line*/
    
    b=-492; // We assign a value to this variable
    
    /* Print variables
    %d --> integer
    %f --> float
    %c --> char
    %s --> string 
    */
    
    /* Commands to print
    \n --> enter
    \t --> tab
    */
    
    // Print one variable
    printf("\nThe value of a = %d is of type integer", a);
    printf("\nThe value of b = %d is of type integer", b);
    printf("\nThe value of x = %f is of type float", x);
    printf("\nThe value of y = %f is of type float", y);
    printf("\nThe value of the letter is = %c is of type char", letra);
    printf("\nThe value of the word = %s is of type string", palabra);
    
    // Print two or more variables
    printf("\nThe value of a = %d is of type integer and the value of numreal1 = %f is of type float", a, x);
    printf("\n %d \t %f \t %c \t %s", a,x,letra,palabra);
    
    // Print data in different format
    printf("\nThe value of x is of type float\n");
    printf("%05.2f",x); // 5 fields for digits, 2 of them for decimals
    printf("\nThe value of x is of type float\n");
    printf("%-5.3f",y);
    
    
    printf("\nProgram completed...\n\n");

    return 0; 
}



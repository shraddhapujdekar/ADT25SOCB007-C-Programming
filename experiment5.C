To write a program to demonstrate the use of single-line and multi-line comments.


#include <stdio.h>
    
int main(){
    //This is a single-line comment 
    //It explains that the program prints a welcome message

    /*This is a multi-line comment.
    It can span across several lines.
    Here we declare a variable and printf its value. */

    int num = 10; //single-line comment:declaring and intializing a variable

    printf("The value of num is: %d\n",num);
    /*End of program.
    Comments do not affect program execution;
    they are purely for documentation purposes.*/

    return 0 ;

    }
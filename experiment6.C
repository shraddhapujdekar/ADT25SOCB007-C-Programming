//To write a program that demostrates the order of execution (precedence and associativity)of operators in expressions.

#include<stdio.h>
int main(){
    int a = 5,b = 10,c = 2,result1,result2;
    //Without parentheses:*has higher precedence than + a+(b*c)as evaluted//
    result1 = a+b*c;

    //Without paretheses:forces addition to happen first 
    result2 =(a+b)*c;

    printf("a+b*c   =%d\n",result1);
    printf("(a+b)*c  =%d\n",result2);

    //Relationaland logical operator precedence
    int x = 5,y = 10,z = 15;
    int logicResult = x<y&&y<z;//relational evaluted before logical AND
    printf("x<y & & y<z = %d\n", logicResult);

    return 0 ;
}
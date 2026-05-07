/*
What will be the output of this program 
int a = 10; 
if (a = 11) 
printf("I am 11"); 
else  
printf("I am not 11"); */
#include <stdio.h>
int main()
{
    int a = 10;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
        //The output is a = 11 is true (assignment), so the if block will be executed and the output will be "I am 11".
    return 0;
}

/* Write a program to read three integers froma file.*/
#include <stdio.h>

int main() {
    FILE *fp;          // file pointer
    int a, b, c;       // variables to store integers

    fp = fopen("problem01_numbers.txt", "r"); // open file in read mode
    if(fp == NULL) {                // check if file exists
        printf("File not found!\n");
        return 1;                   // exit if error
    }

    fscanf(fp, "%d %d %d", &a, &b, &c); // read 3 integers from file
    printf("Read values: %d %d %d\n", a, b, c); // print them

    fclose(fp); // close file
    return 0;
}

/*Write a program to modify a file containing an integer to double its value. */
#include <stdio.h>

int main() {
    FILE *fp;   // file pointer
    int num;    // variable to store integer

    fp = fopen("problem05_datainput.txt", "r"); // open file in read mode
    if(fp == NULL) {             // check if file exists
        printf("File not found!\n");
        return 1;
    }
    fscanf(fp, "%d", &num); // read integer from file
    fclose(fp);             // close file after reading

    fp = fopen("problem05_dataoutput.txt", "w"); // reopen file in write mode
    fprintf(fp, "%d", num*2);    // write double value
    fclose(fp);                  // close file

    printf("Value doubled and updated in problem05_dataoutput.txt\n");
    return 0;
}


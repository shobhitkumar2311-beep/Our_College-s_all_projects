/* Write a program to read a text file character by character and writeits content twice in separate file. */
#include <stdio.h>

int main() {
    FILE *src, *dest; // source and destination file pointers
    char ch;          // variable to store each character

    src = fopen("problem03_input.txt", "r");   // open source file in read mode
    dest = fopen("problem03_output.txt", "w"); // open destination file in write mode

    if(src == NULL || dest == NULL) { // check if files opened correctly
        printf("File error!\n");
        return 1;
    }

    while((ch = fgetc(src)) != EOF) { // read character by character
        fputc(ch, dest); // write once
        fputc(ch, dest); // write again (twice total)
    }

    fclose(src);  // close source file
    fclose(dest); // close destination file
    printf("Content copied twice into output.txt\n");
    return 0;
}

// read content from a file and print to console

#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int main(){
    FILE * fPtr;
    char ch;

    fPtr = fopen("file.txt","r");
    if(fPtr == NULL){
        printf("Unable to open file\n");
        printf("Please check whether file exists and you have read privilege\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened\n");
    do{
        ch = fgetc(fPtr);
        putchar(ch);
    }while(ch!=EOF);
    fclose(fPtr);
    // getch();
    return 0;
}
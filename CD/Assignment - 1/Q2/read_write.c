// read content from a file and write on another file and also print to console

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *Fsource , *Fdest;
    char ch;

    Fsource = fopen("file.txt","r");
    if(Fsource==NULL){
        printf("File not found");
        exit(EXIT_FAILURE);
    }

    Fdest = fopen("file1.txt","w");
    if(Fdest==NULL){

    }

    while(1){
        ch = fgetc(Fsource);
        if(ch==EOF){
            break;
        }
        else{
            putc(ch,Fdest);
            printf("%c",ch);
        }
    }
    printf("\n\nFile copied succesfully\n\n");
    fclose(Fsource);
    fclose(Fdest);
    return 0;

}
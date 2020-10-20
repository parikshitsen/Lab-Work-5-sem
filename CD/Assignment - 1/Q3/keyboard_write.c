// C program to write string from keyboard to file

#include <stdio.h>
#include <stdlib.h>

int main(){
    char sentence[1000];
    FILE *fptr;
    fptr = fopen("file_write.txt","w");
    if(fptr == NULL){
        printf("File not found");
        exit(1);
    }
    
    printf("Enter string:\n");
    fgets(sentence,1000,stdin);
    fprintf(fptr,"%s",sentence);
    fclose(fptr);
    return 0;
  
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, d, e,f;
    FILE *fp1, *fp2;

    fp1 = fopen("read_file.txt", "r");
    fp2 = fopen("write_file.txt", "w");

    if (fp1 == NULL)
    {
        printf("Unable to open file");
        exit(EXIT_FAILURE);
    }
    ch = fgetc(fp1);
    while(ch!=EOF){
        if(ch=='/'){
            ch = fgetc(fp1);
            if(ch=='/'){
                while(ch!='\n'){
                    ch = fgetc(fp1);
                }
            }
            else if(ch=='*'){
                ch = fgetc(fp1);
                while(ch!='*'){
                    ch = fgetc(fp1);
                }
            }
        }
        else{
            printf("%c",ch);
            fprintf(fp2,"%c",ch);
        }
        ch = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
// write a program to create a file employee.txt and store its information


#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fptr;
    char name[100],address[500];
    int age;
    long int mobile_no;
    float salary;
    fptr = fopen("employee.txt","w");

    if(fptr == NULL){
        printf("File not found");
        exit(EXIT_FAILURE);
    }

    printf("Enter name:\t");
    // scanf("%s",&name);
    fgets(name,100,stdin);
    fprintf(fptr,"Name:\t%s",name);
    printf("Enter address:\t");
    // scanf("%s",&address);
    fgets(address,500,stdin);
    fprintf(fptr,"Address:\t%s",address);
    printf("Enter age:\t");
    scanf("%d",&age);
    fprintf(fptr,"Age:\t%d\n",age);
    printf("Enter mobile_no:\t");
    scanf("%ld",&mobile_no);
    fprintf(fptr,"Mobile No:\t%ld\n",mobile_no);
    printf("Enter salary:\t");
    scanf("%f",&salary);
    fprintf(fptr,"Salary:\t%.2f\n",salary);

    printf("\nfile written successfully\n");
    fclose(fptr);
    return 0;
}
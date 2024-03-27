#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    FILE *fptr;     //Declaring file pointer variable

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\newprogram.txt","w");

    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }

    printf("Enter an integer: ");
    scanf("%d", &num);

    fprintf(fptr,"%d", num);        //Writing to text file
    
    fclose(fptr);   //Closing the file

    return 0;
}
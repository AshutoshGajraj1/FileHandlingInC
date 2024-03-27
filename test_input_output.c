#include <stdio.h>
#include <stdlib.h>

void filewrite(){
    FILE *fptr;

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\test1.txt", "w");
    if(fptr == NULL){
        printf("\nFILE CANNOT BE CREATED");
        exit(1);
    }
    else{
        printf("File has been created succesfully\n");
    }
    
    // Taking input from user through keyboard
    char content[100];
    printf("Enter the content to be stored: ");
    // fgets(content, sizeof(content), stdin);
    gets(content);

    // Writes to the file
    fputs(content, fptr);

    fclose(fptr);
}

void fileread(){
    FILE *fptr;

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\test1.txt","r");

    if(fptr == NULL){
        printf("File doesn't exist");
        exit(1);
    }
    char string[100];
    fgets(string, 100, fptr);

    printf("File content is:\n");
    printf("%s", string);

    fclose(fptr);
}

int main(){
    filewrite();
    fileread();
}

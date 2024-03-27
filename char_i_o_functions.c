#include <stdio.h>
#include <stdlib.h>

void char_write(){
    FILE *fptr;

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\char.txt","w");

    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }
    
    char ch;
    printf("Enter a character to store into a file: ");
    // scanf("%c", &ch);
    ch = getchar();

    fputc(ch, fptr);
    fclose(fptr);
}

void char_read(){
    FILE *fptr;

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\char.txt","r");

    if(fptr == NULL){
        printf("Error !!");
        exit(1);
    }

    char c;
    c = fgetc(fptr);

    printf("\nThe charater is %c", c);
}

int main(){

    char_write();
    char_read();
    
    return 0;
}
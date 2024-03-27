#include <stdio.h>
#include <stdlib.h>

void char_read(){
    FILE *fptr;

    fptr = fopen("C:\\Users\\B.TECH_AI_122\\Documents\\Cprogram\\FileHandling\\mutilple_char.txt","w");

    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }

    char ch;
    while((ch=getchar())!='\n'){
        fputc(ch,fptr);
    }

    fclose(fptr);
}


int main(){

    char_read();
    return 0;
}

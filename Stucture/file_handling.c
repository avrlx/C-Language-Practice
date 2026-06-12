#include <stdio.h>
int main(){
    char ch[] ="My name is aviral singh.";
    FILE *fp = NULL;
    fp = fopen("aviral.txt","w");
    if(fp == NULL){
        printf("file doen't open.");
    }else{
        int i=0;
        char a= '\0';
        while (ch[i] !='\0')
        {
            fputc(ch[i],fp);
            printf(" %c",ch);
            i++;
        }
        
        fputc('A',fp);
        fclose(fp);
    }
    return 0;
}
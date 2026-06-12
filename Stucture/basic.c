#include<stdio.h>
int main(){
    struct basic
    {
        char name[10];
        float price;
        int pages;
    };
    struct basic book;
    printf("%lu\n",sizeof(book));
    printf("%lu\n",sizeof(int));
    printf("%lu\n",sizeof(float));
    printf("%lu\n",sizeof(char));    
    printf("%lu\n",sizeof(double));
    printf("%lu\n",sizeof(short));
    return 0;
}
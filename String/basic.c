#include <stdio.h>
#include<string.h>

void m(char a[100]){
    a[0]= '1';
    printf("%s",a);
}
int main(){
    char a[]="helllo i am aviral singh\n";
    m(a);
    printf("%s",a);

    puts("hellow ");
    return 0;
}
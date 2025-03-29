#include <stdio.h>
#define MAX 256


int main(){
    char str[MAX];
    int i;
    
    printf("Informe uma string: ");
    fgets(str, MAX, stdin);
  
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); //Maiuscula para minuscula
        }
    }
    
    printf("%s", str);
}
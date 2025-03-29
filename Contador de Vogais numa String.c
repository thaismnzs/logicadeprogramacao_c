#include <stdio.h>
#define MAX 256

int main(){
    char str[MAX];
    int i, contador=0;
    
    printf("Informe a string: ");
    fgets(str, MAX, stdin);
    
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'A'
        || str[i] == 'e' || str[i] == 'E'
        || str[i] == 'i' || str[i] == 'I'
        || str[i] == 'o' || str[i] == 'O'
        || str[i] == 'u' || str[i] == 'U') {
            contador++;
        }
    }
    
    printf("%d", contador);
}
#include <stdio.h>
#define MAX 256

int main(){
    char str[MAX];
    int contador=0, i;
    char c;
    
    printf("Informe a string: ");
    fgets(str, MAX, stdin);
    
    printf("Informe um caractere: ");
    scanf("%c", &c);
    
    for(i=0; str[i] != '\0'; i++){
       if(str[i] == c){
           contador++;
       }
    }
    
    printf("%d", contador);
}
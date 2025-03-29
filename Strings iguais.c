#include <stdio.h>
#define MAX 256
#define SPACE 32

int main(){
    char str[MAX], ing[MAX];
    int i, j;
    
    printf("Informe uma string: ");
    fgets(str, MAX, stdin);
    printf("Informe outra string: ");
    fgets(ing, MAX, stdin);
    
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); //Maiuscula para minuscula
        }
    }
    
    for(j=0; ing[j] != '\0'; j++) {
        if(ing[j] >= 'A' && ing[j] <= 'Z') {
            ing[j] = ing[j] + ('a' - 'A'); //Maiuscula para minuscula
        }
    }
    
  if(str[i] == ing[j]) {
    printf("São iguais.");
  }
}
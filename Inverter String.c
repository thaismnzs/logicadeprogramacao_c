#include <stdio.h>
#define MAX 256

int main(){
    char str[MAX];
    int i, j;
    char temp;
    
    printf("Informe a string: ");
    fgets(str, MAX, stdin);
    
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == '\n') {
            str[i] == '\0';
            break; //Remover a quebra de linha
        }
    }
    
    for(j=0; str[j] !='\0'; j++);
           for(i = 0, j = j - 1; i < j; i++, j--) {
        // Troca de caracteres
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    
    printf("String invertida: %s", str);
}
 
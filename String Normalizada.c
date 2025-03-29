#include <stdio.h>
#define MAX 256
#define SPACE 32

int main(){
    char str[MAX];
    int i, j;
    
    printf("Informe uma string: ");
    fgets(str, MAX, stdin);
    
    for(i=0; str[i] != '\0'; i++) {
        if(str[i] != SPACE) {
            str[j] = str[i];
            j++;
        }
    }
    
    printf("String normalizada: %s", str);
}

    
    
    
#include <stdio.h>
#define MAX 256
#define CONTEM 1
#define NAO_CONTEM 0

int main(){
    char str[MAX];
    char ing[MAX];
    int i, j, contem= NAO_CONTEM;
    
    printf("Informe uma string: ");
    fgets(str, MAX, stdin);
    printf("Informe outra string: ");
    fgets(ing, MAX, stdin);
    
     for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    for(i = 0; ing[i] != '\0'; i++) {
        if(ing[i] == '\n') {
            ing[i] = '\0';
            break;
        }
    }
    
    for(i=0; str[i] != '\0'; i++) {
        for(j=0; ing[j] != '\0'; j++) {
            if(str[i] == ing[j]) {
                contem = CONTEM;
                break;
            }
        }
        
        if(contem == CONTEM){
            break;
        }
    }
    
    if(contem == NAO_CONTEM) {
        printf("A 1ª string não contém a 2ª.");
    }else if (contem == CONTEM) {
        printf("A 1ª string contém a 2ª.");
    }
    }
    
    
    
    
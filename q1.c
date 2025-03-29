#include <stdio.h>
#define MAX 256
#define ALFABETO 26

int main(){
    char mensagem[MAX];
    int letras[ALFABETO] = {0};
    int total_letras=0;
    int i, j;
    
    printf("Informe a mensagem: ");
    fgets(mensagem, MAX, stdin);
    
//Transformar em minúsculas
   for(i=0; mensagem[i] != '\0'; i++){
       if(mensagem[i] >= 'A' && mensagem[i] <= 'Z'){
           mensagem[i] = mensagem[i] + ('a'-'A');
       }
   }
   
   for(i = 0; mensagem[i] != '\0'; i++) {
    if(mensagem[i] >= 'a' && mensagem[i] <= 'z') { // Verifica se o caractere atual é uma letra minúscula
        j = mensagem[i] - 'a'; // Calcula o índice correspondente à letra no alfabeto (de 'a' a 'z')
        if(letras[j] == 0) { // Se a letra ainda não foi encontrada (não foi marcada como 1)
            letras[j] = 1; // Marca a letra como encontrada (1 no índice correspondente)
            total_letras++; // Incrementa o contador de letras únicas
        }
    }
}

   if(total_letras == ALFABETO) {
       printf("Mensagem completa.");
   } else if (total_letras >= ALFABETO/2) {
       printf("Mensagem quase completa.");
   } else {
       printf("Mensagem mal elaborada.");
   }
}
    
    

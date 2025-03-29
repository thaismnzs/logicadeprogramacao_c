#include <stdio.h>

main() {
   int ano;
   
   printf("Informe o ano a ser analisado: ");
   scanf("%d", &ano);
   
   if (ano % 4 == 0) {
       printf("O ano é bissexto.");
   } else {
       printf("O ano não é bissexto.");
   }
}
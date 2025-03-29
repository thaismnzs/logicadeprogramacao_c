#include <stdio.h>

main() {
   int num, soma, divisores;
   
   printf("Informe um valor: ");
   scanf("%d", &num);
   
   divisores = 1;
   while (divisores <= num / 2) {
       if (num % divisores == 0) {
           soma += divisores; 
       }
       
       divisores++;
   }
       if (soma == num) {
           printf("O número %d é perfeito.", num);
       } else {
            printf("O número %d não é perfeito.", num);
       }
   }
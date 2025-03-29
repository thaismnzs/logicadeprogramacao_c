#include <stdio.h>

main() {
   int n1, n2;
   int numDivisor;
   int soma1=0, soma2=0;
   
   printf("Informe um valor: ");
   scanf("%d", &n1);
   printf("Informe outro valor, para verificar se são amigos: ");
   scanf("%d", &n2);
   
   numDivisor = 1;
   while (numDivisor <= n1 / 2) {
       if (n1 % numDivisor == 0) {
           soma1 += numDivisor; 
       }
       numDivisor++;
   }
   
   numDivisor = 1;
   while (numDivisor <= n2 / 2) {
       if (n2 % numDivisor == 0) {
           soma2 += numDivisor; 
       }
       numDivisor++;
   }
   
   if (soma1 == n2 && soma2 == n1) {
       printf("%d e %d são números amigos.", n1, n2);
   } else {
       printf("%d e %d não são números amigos.", n1, n2);
   }
}
#include <stdio.h>

main() {
   int tipoPulverizacao;
   int areaPulverizada;
   float valor;
   float desconto;
   
   printf("Informe o tipo de pulverização a ser realizada: ");
   scanf("%d", &tipoPulverizacao);
   printf("Informe a área a ser pulverizada: ");
   scanf(" %d", &areaPulverizada);
  
   if (tipoPulverizacao == 1) {
       valor = areaPulverizada * 50;
   } else if (tipoPulverizacao == 2) {
       valor = areaPulverizada * 100;
   } else if (tipoPulverizacao == 3) {
       valor = areaPulverizada * 150;
   } else if (tipoPulverizacao == 4) {
       valor = areaPulverizada * 250;
   }
   
    if (areaPulverizada > 1000) {
       desconto = valor*0.05;
       valor = valor - desconto; 
   } else {
       desconto = 0;
   }
   
   if (valor > 750) {
       desconto = (valor - 750) * 0.10;
       valor = valor - desconto;
   } else {
       desconto = 0;
   }
       printf("Tipo escolhido: %d \nTamanho da area: %d \nValor: %f", tipoPulverizacao, areaPulverizada, valor);
   }
#include <stdio.h>

main() {
   float litro;
   char tipoCombustivel;
   float valor;
   
   printf("Informe a quantidade de litros vendidos: ");
   scanf("%f", &litro);
   printf ("Informe o tipo de combustível (A para Álcool e G para gasolina): ");
   scanf(" %c", &tipoCombustivel);
   
   if (tipoCombustivel == 'G' && litro <= 25) {
       valor = (litro * 2.70) - (litro * 2.70 * 0.03);
       } else if (tipoCombustivel == 'G' && litro > 25) {
           valor = (litro * 2.70) - (litro * 2.70 * 0.05);
       }
       
       if (tipoCombustivel == 'A' && litro <= 25) {
           valor = (litro * 1.90) - (litro * 1.90 * 0.02);
       } else if (tipoCombustivel == 'A' && litro > 25) {
            valor = (litro * 1.90) - (litro * 1.90 * 0.04);
       }
       
       printf("Tipo de combustível: %c \n Quantidade de litros: %f \n Valor pago: %f", tipoCombustivel, litro, valor);
   }
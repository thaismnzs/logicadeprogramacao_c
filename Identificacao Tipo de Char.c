#include <stdio.h>

main() {
   char c;
   
   printf("Informe um caractere: ");
   scanf("%c", &c);
   
   if (c == 'a' || c =='e' || c == 'i'|| c == 'o' || c =='u') {
       printf("É uma vogal.");
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
       printf("É uma consoante.");
   } else if (c >= '0' && c <= '9') {
       printf("É um número.");
   } else {
       printf("É um símbolo.");
   }
}
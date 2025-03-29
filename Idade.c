#include <stdio.h>

main() {
    int idade;
    int anos;
    int meses;
    int dias;

    
    printf("Informe a sua idade, em dias: ");
    scanf("%d" ,&idade);
    
    anos = idade / 365;
    dias = idade % 365;
    meses = dias / 30;
    dias = dias % 30;
    
    
    printf("%d anos, %d meses e %d dias." ,anos, meses, dias);
}
    
#include <stdio.h>

main() {
    float fahrenheit;
    float celsius;
    
    printf("Informe a temperatura em fahrenheit: ");
    scanf("%f" ,&fahrenheit);
    
    celsius = (fahrenheit - 32) * 5/9;
    
    printf("%f ºF em Celsius é igual a: %f" ,fahrenheit, celsius);
}
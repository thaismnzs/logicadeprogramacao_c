#include <stdio.h>

main() {
    float raio;
    float altura;
    float volume;
    
    printf("Informe o raio e a altura da lata: ");
    scanf("%f %f" ,&raio, &altura);
    
    volume = 3.14 * (raio * raio) * altura;
    
    printf("O volume da lata é: %f" ,volume);
}
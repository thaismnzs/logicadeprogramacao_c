#include <stdio.h>

main() {
	float lado;
	float area;
	float perimetro;
	
	printf("Informe o lado do quadrado: ");
	scanf("%f" ,&lado);
	
	area = lado * lado;
	perimetro = lado * 4;
	
	printf("A área do quadrado é igual a: %f e o perímetro é igual a: %f." ,area ,perimetro);
}
	
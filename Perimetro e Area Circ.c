#include <stdio.h>

main() {
	float raio;
	float area;
	float perimetro;
	
	printf("Informe o raio da circunferência: ");
	scanf("%f" ,&raio);
	
	area = 3.14 * (raio * raio);
	perimetro = 2 * 3.14 * raio;
	
	printf("A área da circunferência é igual a: %f\n O seu perímetro é igual a: %f." ,area ,perimetro);
}
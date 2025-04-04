#include <stdio.h>
//Struct Simplificada
typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main(){
    Pessoa p2 = {"Thais", 21, 1.63};
    printf("Nome: %s\n", p2.nome);
    printf("Idade: %d\n", p2.idade);
    printf("Altura: %.2f\n", p2.altura);
}
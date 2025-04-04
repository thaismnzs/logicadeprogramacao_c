#include <stdio.h>
//Sintaxe
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main(){
    struct Pessoa p1 = {"Thais", 21, 1.63};

    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);
}
#include <stdio.h>
//Struct em fun��o
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void exibirPessoa(Pessoa *p) { //A variavel da struct pessoa ser� um ponteiro
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
}

int main(){
    Pessoa p3 = {"Carlos", 45};

    exibirPessoa(&p3);
}
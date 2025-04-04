#include <stdio.h>
//Struct aninhadas
typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

int main(){
    Pessoa p4 = {"Cristiane", {17, 1, 1975}};
    printf("Nome: %s\n", p4.nome);
    printf("Data de nascimento: %d / %d / %d\n", p4.nascimento.dia, p4.nascimento.mes, p4.nascimento.ano);
}

#include <stdio.h>

main() {
    float renda;
    float emprestimo;
    int prestacoes;
    
    printf("Informe a renda do solicitante: ");
    scanf("%f", &renda);
    printf("Informe o valor total do empréstimo: ");
    scanf(" %f", &emprestimo);
    printf("Informe a quantidade de prestações: ");
    scanf(" %d", &prestacoes);
    
    if (emprestimo <= renda*10 && prestacoes*renda <= renda*0.3) {
        printf("O empréstimo pode ser concedido.");
    }else{
        printf("O empréstimo não pode ser concedido.");
    }
}
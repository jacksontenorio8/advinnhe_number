#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    
    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));
    
    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;
    
    printf("Bem-vindo ao Adivinhe o Número!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");
    
    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;
        
        if (palpite > numeroSecreto) {
            printf("Palpite muito alto. Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            printf("Palpite muito baixo. Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número em %d tentativas!\n", tentativas);
        }
    } while (palpite != numeroSecreto);
    
    return 0;
}

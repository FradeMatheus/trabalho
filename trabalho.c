#include <stdio.h>
#include <stdlib.h>

void exibir_menu() {
    printf("Por favor, escolha uma das opções de atendimento:\n");
    printf("1. Sintomas de Dengue - Consultório 1\n");
    printf("2. Sintomas de COVID-19 - Consultório 2\n");
    printf("3. Consulta Diária - Consultório 3\n");
    printf("0. Sair\n");
}

int main() {
    int opcao, senha = 1000;  
  
    do {
        exibir_menu();
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Atendimento encerrado. Obrigado!\n");
            break;
        }

        
        printf("Sua senha: %d\n", senha++);

        switch(opcao) {
            case 1:
                printf("Dirija-se ao Consultório 1 para atendimento de Dengue.\n");
                break;
            case 2:
                printf("Dirija-se ao Consultório 2 para atendimento de COVID-19.\n");
                break;
            case 3:
                printf("Dirija-se ao Consultório 3 para uma consulta diária.\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
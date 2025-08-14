#include <stdio.h>

int main() {
    int i, q;
    char movimento[10];
    int opcao;

    printf("Qual peça você deseja mover...\n");
    printf("1. Torre;\n");
    printf("2. Rainha;\n");
    printf("3. Bispo;\n");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 3) {
        printf("Opção inválida!\n");
        return 1;
    }

    switch (opcao) {
        case 1: // movimento de torre
            printf("Digite a quantidade de vezes que você quer mover a torre: ");
            scanf("%d", &q);
            printf("Digite a direção que você quer mover a torre: ");
            scanf("%9s", movimento);

            for (i = 0; i < q; i++) {
                printf("%s\n", movimento);
            }
            break;

        case 2: // movimento da rainha
            printf("Digite a quantidade de vezes que você quer mover a rainha: ");
            scanf("%d", &q);
            printf("Digite a direção que você quer mover a rainha: ");
            scanf("%9s", movimento);

            i = 0;
            while (i < q) {
                printf("%s\n", movimento);
                i++;
            }
            break;

        case 3: // movimento do bispo
            printf("Digite a quantidade de vezes que você quer mover o bispo: ");
            scanf("%d", &q);
            printf("Digite a direção que você quer mover o bispo (Ex.:cimaEsquerda, baixoDireita...): ");
            scanf("%9s", movimento);

            i = 0;
            do {
                printf("%s\n", movimento);
                i++;
            } while (i < q);
            break;
    }

    return 0;
}

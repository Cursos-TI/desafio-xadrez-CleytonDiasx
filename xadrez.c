#include <stdio.h>

int main(){

    int i;//contador;
    int q;//quantidade;
    char movimento[20];//nome da direcao(EX. esquerda, direita, cima e baixo);
    char mov[20];//movimento 2 do cavalo para manter o movimento em L;
    int opcao;//usado para a estrutura switch;

    //menu do jogo com 3 pecas iniciais;
    printf("Qual peca voce deseja mover...\n");
    printf("1. Torre;\n");
    printf("2. Rainha;\n");
    printf("3. Bispo;\n");
    printf("4. Cavalo;\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // mensagem de invalido caso digite 4 no menu acima:
    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida!\n");
        return 1;
    }
    //estrutura apos escilher uma das opcoes acima;
    switch(opcao){    
        case 1://movimento de torre;
        printf("Digite a quantidade de vezes que voce quer mover a torre: ");
        scanf("%d", &q);
        printf("Digite a direcao que voce quer mover a torre:  ");
        scanf("%s", movimento);

            for(i = 0; i < q; i++){
                printf("%s\n", movimento);
            }
            break;

        case 2://movimento da rainha;
        printf("Digite a quantidade de vezes que voce quer mover a rainha: ");
        scanf("%d", &q);
        printf("Digite a direcao que voce quer mover a rainha: ");
        scanf("%s", movimento);
        
            i = 0;
            while(i < q){
                printf("%s\n", movimento);
                i++;
            }
            break;
        case 3://movimento do bispo ;
        printf("Digite a quantidade de vezes que voce quer mover o bispo: ");
        scanf("%d", &q);
        printf("Digite a direcao que voce quer mover o bispo: ");
        scanf("%s", movimento);

            i = 0;
            do{
                printf("%s\n", movimento);
                i++;
            }while(i < q);
            break;
        case 4://movimento cavalo;
        printf("Digite a direcao que voce quer mover o cavalo (cima / baixo): ");
        scanf("%s", movimento);
        printf("Digite a direcao que voce quer mover o cavalo (direita / esquerda): ");
        scanf("%s", mov);
            int j = 1;//variavel do loop externo WHILE;
            while(j--){
                for(i = 0; i < 2; i++){//loop interno FOR;
                    printf("%s\n", movimento);
                }
                printf("%s\n", mov);
            }
            break;
    }

    return 0;
}
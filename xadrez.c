#include <stdio.h>

void movRainha(int r){
    if( r > 0){
        printf("Esquerda\n");
        movRainha(r - 1);
    }
}
void movTorre(int t){
    if(t > 0){
        printf("Direita\n");
        movTorre(t - 1);
    }
}
void movBispo(int b){
    if(b > 0){
        printf("cimaDireita\n");
        movBispo(b - 1);
    }
}
int main(){

    int nr = 8,  nb = 5, nt = 5;
    int i;//contador;
    int q;//quantidade;
    char movimento[20];//nome da direcao(EX. esquerda, direita, cima e baixo);
    char mov[20];//movimento 2 do cavalo para manter o movimento em L;
    int opcao;//usado para a estrutura switch;

    //menu do jogo com 4 pecas iniciais;
    printf("Qual peca voce deseja mover...\n");
    printf("1. Torre;\n");
    printf("2. Rainha;\n");
    printf("3. Bispo;\n");
    printf("4. Cavalo;\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // mensagem de invalido caso digite 4 no menu acima:
    if (opcao < 1 || opcao > 4){
        printf("Opcao invalida!\n");
        return 1;
    }
    //estrutura apos escilher uma das opcoes acima;
    switch(opcao){    
        case 1://movimento de torre;
            movTorre(nt);
        break;

        case 2://movimento da rainha;
            movRainha(nr);
        break;
        case 3://movimento do bispo ;
            movBispo(nb);
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
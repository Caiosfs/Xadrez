#include <stdio.h>
//utilizado um void por peça, pois o mesmo não retorna nada, apenas executa o que foi pedido.
void MovTorre(int movimentoTO){
    if (movimentoTO > 0){
        printf("Direita.\n");
        MovTorre(movimentoTO - 1);
    }
} 
void MovBispo(int movimentoBIP){
    if (movimentoBIP > 0){
        printf("Cima.\n");
        printf("Direita.\n");
        MovBispo(movimentoBIP - 1);
    }
}
void MovRainha(int movimentoRAI){
    if (movimentoRAI > 0){
        printf("Esquerda.\n");
        MovRainha(movimentoRAI - 1);
    }
}
int main(){

    int opcao; //variavel de escolha das peças.
    int cavalo = 1; //variavel para cavalo.
    int torre = 5;//variavel para torre.
    int bispo = 5;//variavel para bispo.
    int rainha = 8;//variavel para rainha.


    printf("Teste Peça de Xadrez.\n");
    printf("1. Torre.\n");//menu para escolher qual peça iniciar.
    printf("2. Bispo.\n");
    printf("3. Rainha.\n");
    printf("4. Cavalo.\n");
    printf("Escolha sua Peça: ");
    scanf("%d", &opcao);//escolha do usuario

    switch (opcao) {//foi usado switch para o codigo rodar o melhor possivel(minha opinião)
    case 1: //caso 1 estrutura void
        
        printf("Torre:\n");
        MovTorre(torre);
    break;
    case 2://caso 2 estrutura void
        
        printf("Bispo:\n");
        MovBispo(bispo);
    break;
    case 3: //caso 3 estrutura void
        
        printf("Rainha:\n");
        MovRainha(rainha);
    break;
    case 4:

        printf("Cavalo:\n");
        while (cavalo--) { //caso 4 estrututa de repetição while+for
            for (int movimento = 0; movimento < 2; movimento++) {
                printf("Cima.\n");
            }
            printf("Direita.\n");
        }
        
    break;
    default: //default para erros do usuario.
        printf("Opção Invalida!");
    break;
    }
 
    return 0;
    
}
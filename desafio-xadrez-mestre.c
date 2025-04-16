/*
Programa em C que determina o movimento da peca do JogoDeXadrez, conforme a entrada do usuario.

Torre - peca do xadrez q se movimenta tantas vezes para direita/esquerda ou cima/baixo
Bispo - peca do xadrez q se movimenta tantas vezes na diagonal - cima/direita, cima/esquerda, baixo/direita, baixo/esquerda
Rainha - acumula os movimentos tanto da Torre, como a do Bispo. Sendo q ela tem 8 possiveis movimentos/lugares
Cavalo - peca do xadrez q faz o movimento em 'L'. Sendo q ele tem 6 possiveis movimentos/lugares 

Utilizamos a recursividade no movimento da Torre e da Rainha

*/
#include <stdio.h>


//funcao recursiva
void movXadrezRecursiva(int n, char direcao[20]){
    if(n > 0){
        movXadrezRecursiva(n-1, direcao);
        printf("\n%s", direcao);
    }
}   

int main(){
    int opcao, opcaoV, opcaoH, opcaoDist;
    int i, j;
    int numCasas = 5;
    char direcao[20], direcaoH[20], direcaoV[20];

    printf("***********************************   JOGO DO XADREZ   *********************************\n");
    printf("*********************   Escolha qual peca do XADREZ deseja movimentar   *********************\n");
    printf("\n1. Para movimentar a TORRE\n");
    printf("2. Para movimentar o BISPO\n");
    printf("3. Para movimentar a RAINHA\n");
    printf("4. Para movimentar o CAVALO\n");
    printf("\nDigite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n*****************  Voce escolheu movimentar a TORRE   *****************\n");
        printf("\nDigite a quantidade de casas q deseja andar: ");
        scanf("%d", &numCasas);
        printf("Digite a direcao q deseja seguir - DIREITA, ESQUERDA, CIMA, BAIXO: ");
        scanf("%s", &direcao);
        printf("\n******  OK, A TORRE MOVERA PARA  ******");
        printf("\n****************************************");
        movXadrezRecursiva(numCasas, direcao);
        break;
    case 2:
        printf("\n*****************  Voce escolheu movimentar o BISPO   *****************\n");
        printf("\nDigite a quantidade de casas q deseja andar: ");
        scanf("%d", &numCasas);
        printf("Digite a direcao HORIZONTAL q deseja seguir - DIREITA ou ESQUERDA: ");
        scanf("%s", &direcaoH);
        printf("Digite a direcao VERTICAL q deseja seguir - CIMA ou BAIXO: ");
        scanf("%s", &direcaoV);
        printf("\n******  OK, O BISPO MOVERA PARA  ******");
        printf("\n****************************************");
        j=1;
        while(j <= numCasas*2){
            if(j % 2 != 0){
                printf("\n%s", direcaoV);       //imprime a direcaoV do movimento
            }else{
                printf("\n%s", direcaoH);
            }
    
            j++;
        }
        break;
    case 3:
        printf("\n*****************  Voce escolheu movimentar a RAINHA   *****************\n");
        printf("\nDigite a quantidade de casas q deseja andar: ");
        scanf("%d", &numCasas);
        printf("Digite a direcao q deseja seguir - DIREITA, ESQUERDA, CIMA, BAIXO: ");
        scanf("%s", &direcao);
        printf("\n******  OK, A RAINHA MOVERA PARA  ******");
        printf("\n****************************************");
        movXadrezRecursiva(numCasas, direcao);
        break;
    case 4:
        printf("\n*****************  Voce escolheu movimentar o CAVALO   *****************\n");
        printf("1. Para DIREITA\n");   
        printf("2. Para ESQUERDA\n");
        printf("\n Digite a opcao: ");
        scanf("%d", &opcaoH);
        printf("\n1. Para CIMA\n");   
        printf("2. Para BAIXO\n"); 
        printf("\n Digite a opcao: ");
        scanf("%d", &opcaoV);
        printf("\n1. Movimento CURTO\n");   
        printf("2. Movimento LONGO\n"); 
        printf("\n Digite a opcao: ");
        scanf("%d", &opcaoDist);

        switch (opcaoH){
            case 1:
                printf("\n******  OK, O CAVALO MOVERA PARA  ******");
                printf("\n****************************************");
                
                //printf("\nDIREITA");

                switch (opcaoV){
                    case 1:
                        //printf("\nCIMA");
                        switch (opcaoDist){
                            case 1:
                                //printf("\nCURTO");
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 2){
                                        printf("\nCima");
                                        j++;
                                    }
                                    printf("\nDireita");
                                }
                                break;

                            case 2:
                                //printf("\nLONGO"); 
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 1){
                                        printf("\nCima");
                                        j++;
                                    }
                                    printf("\nDireita");
                                }     
                                break;
                            default:
                                break;
                        }

                        break;

                    case 2:
                        //printf("\nBAIXO");
                        switch (opcaoDist){
                            case 1:
                                //printf("\nCURTO");
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 2){
                                        printf("\nBaixo");
                                        j++;
                                    }
                                    printf("\nDireita");
                                }
                                break;

                            case 2:
                                //printf("\nLONGO");
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 1){
                                        printf("\nBaixo");
                                        j++;
                                    }
                                    printf("\nDireita");
                                }      
                                break;
                            default:
                                break;
                        }

                        break;
                    
                    default:
                        break;
                }

                break;

            case 2:
    
                printf("\n******  OK, O CAVALO MOVERA PARA  ******");
                printf("\n****************************************");
                
                //printf("\nESQUERDA");
                
                switch (opcaoV){
                    case 1:
                        //printf("\nCIMA");
                        switch (opcaoDist){
                            case 1:
                                //printf("\nCURTO");
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 2){
                                        printf("\nCima");
                                        j++;
                                    }
                                    printf("\nEsquerda");
                                }
                                break;

                            case 2:
                                //printf("\nLONGO"); 
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 1){
                                        printf("\nCima");
                                        j++;
                                    }
                                    printf("\nEsquerda");
                                }     
                                break;
                            default:
                                break;
                        }
                        break;

                    case 2:
                        //printf("\nBAIXO");
                        switch (opcaoDist){
                            case 1:
                                //printf("\nCURTO");
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 2){
                                        printf("\nBaixo");
                                        j++;
                                    }
                                    printf("\nEsquerda");
                                }
                                break;

                            case 2:
                                //printf("\nLONGO");  
                                j=1; i=1;
                                for(i=1 ; i<=opcaoDist; i++){
                                    while (j <= 1){
                                        printf("\nBaixo");
                                        j++;
                                    }
                                    printf("\nEsquerda");
                                }  
                                break;
                            default:
                                break;
                        }
                        
                        break;
                    
                    default:
                        break;
                }

                break;
        
            default:
                printf("invalida");
                break;
        }

        break;    
    
    default:
        break;
    }

    return 0;

}
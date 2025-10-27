#include <stdio.h>

void movertorre(int casa,int atual) {
    if(atual > casa) return; // caso base
    printf("direita\n");//movimento da torre
    movertorre(casa,atual+1);
}
//funcao recursiva:Bispo
//(com loops aninhados)
void moverbisporecursivo(int vertical, int horizontal, int limite){
    if(vertical > limite) return; // caso base (acabou o movimento)
 for (int i = 1; i <= limite; i++) {
            printf("diagonal superior direita 1(passo %d,%d)\n", vertical, i); //movimento do bispo
 }
            moverbisporecursivo(vertical + 1, horizontal ,limite); // recursao vertical
        }

        //funcao recursiva: rainha
        void moverrainha(int casas, int atual){
            if (atual > casas) return;
            printf("cima\n"); //movimento da rainha
            moverrainha(casas, atual + 1);
        }

      //  loops aninhados: cavalo
      void movercavalo(){
        int movimentos = 1;

        // o cavalo se move duas casas para cima e uma para a direita
        for(int i = 1; i <= 2; i++){//movimento vertical (cima)
            printf("cima\n");
            for( int j = 1; j <= 1; j++){//movimento horizontal (direita)
                if(i== 2){
                printf("direita\n");
                movimentos++;
                break; //sai do loop apos completar o L
                }else{
                    continue; //pular para o proximo movimento vertical
                }
            } 
        }
        printf("Total de movimentos do cavalo: %d\n", movimentos);
      }

      //funcao principal
      int main(){
        int opcao;
        char casas;
         printf(" simulador de movimentos de pecas de xadrez\n");
            printf("Escolha a peca para mover:\n1.Torre\n2.Bispo\n3.Rainha\n4.Cavalo\n");
            scanf("%d", &opcao);
            switch (opcao)
            {
            case 1:
            printf("\nvoce escolheu a TORRE\n");
            printf("Digite o numero de casas que a torre deve mover para a direita:\n");
           scanf("%c", &casas);
           printf("\nmovimento da TORRE\n");
           movertorre(casas,1);    
                break;
            case 2:
            printf("\nvoce escolheu o BISPO\n");
            printf("Digite o numero de casas que o bispo deve mover na diagonal:\n");
           scanf("%c", &casas);
           printf("\nmovimento do BISPO\n");
           moverbisporecursivo(1,1,casas);    
                break;
            case 3:
            printf("\nvoce escolheu a RAINHA\n");
            printf("Digite o numero de casas que a rainha deve mover para cima:\n");
        scanf("%c", &casas);
           printf("\nmovimento da RAINHA\n");
           moverrainha(casas,1);    
                break;
            case 4:
            printf("\nvoce escolheu o CAVALO\n");
            printf("\nmovimento do CAVALO\n");
           movercavalo();
           break;

              default:
              printf("opcao invalida tente novamente\n"); 
                break;
            }
            printf("movimento concluido\n");
            return 0;
      }


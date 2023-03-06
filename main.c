#include <stdio.h>
#include<string.h>
#include"filesh/matriz.h"
#include<math.h>
#include <ctype.h>

int main() {
    //variaveis de ambiente
        int quantidadeMatrizes = 2;
        Matriz Matriz;
        int contador = 0;
        int parada = 1;
        int *vetor;
        int linhas;
        int colunas;
        int CasasDoVetor;
        char opcao; 
    //fim das variaveis de ambiente
    
    opcao = 'P';//inicializando a variavel

    //escrevendo o arquivo
        SetMatrizSize();
        for (int i = 0; i < quantidadeMatrizes; i++)
        {
            SaveMatriz(&Matriz);
        }
    //fim da escrita

    //abrindo o arquivo para retirar as matrizes
        FILE *file;

        file = fopen("dados.txt","r");
        if(file == NULL){
            printf("This is not open!");
            return 1;//vai apenas encerrar o programa e retornar o valor 1 identificando o erro
        }
    //fim do procedimento, arquivo aberto para extração de informações

    //pegando o numero de linhas e colunas
        while(parada != 0){

            //para pegar o tamanho da matriz
                if(contador < 1){
                    while(fscanf(file,"%d",&linhas) == 1)
                    {
                        contador ++;
                        if(contador == 2)
                        {
                            break;
                        }
                    }
                    colunas = linhas;
                    CasasDoVetor = pow(linhas,2);
                }
            //fim da coleta de informações

            break;
        }
    //fim da coleta de dados

    //alocação do vetor
        vetor = (int *)malloc((CasasDoVetor * quantidadeMatrizes) * sizeof(int));
    //fim da alocação

    //preenchendo o vetor
        for(int i = 0 ; i < (CasasDoVetor * quantidadeMatrizes); i++){
            fscanf(file,"%d",&vetor[i]);
        }
    //fim do preenchimento
    fclose(file);

    contador = 0;

    while(parada !=0)
    {
        //preenchendo a matriz com as informações do arquivo
            contador = FillingTheMatriz(&Matriz,vetor,contador);
        //fim do preenchimento

            while( opcao!='N' &&  opcao!='S' ){
                //para apresentar os componentes ao usuario
                    for (int i = 0; i < linhas; i++)
                    {
                        for (int j = 0; j < colunas; j++)
                        {
                            printf("[%d]",Matriz.Matriz[i][j].valor);
                        }
                        printf("\n");
                    }
                //fim do procedimento
                printf("Deseja mudar a matriz ou quer que ela permanessa como esta?[S/N]\n");
                scanf(" %c",&opcao);
                opcao = toupper(opcao);//garantindo que a resposta será uma letra maiuscula
            }
        if(opcao == 'N')break;//encerramento do while
        opcao = 'p';
    }

    
    

    return 0;
}
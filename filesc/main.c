#include <stdio.h>
#include<string.h>
#include"/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/filesh/matriz.h"
#include<math.h>
#include <ctype.h>

int main() {
    //variaveis de ambiente
        signed int quantidadeMatrizes = 4;
        Matriz Matriz;
        int contador = 0;
        signed int parada = 1;
        int *vetor;
        signed int linhas;
        signed int colunas;
        int CasasDoVetor;
        char opcao; 
        signed int contador_aux;
        signed int initRow;
        signed int initColunm;
        signed int Time;
        
    //fim das variaveis de ambiente
    
    Time = 0;

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

        file = fopen("dados.data","r");
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

    //fechando o arquivo
        fclose(file);
    //fim do fechamento

    contador = 0;//reiniciando o contador para que seja possível usar esta mesma variavel

    //preenchimento da matriz
    while(parada !=0)
    {
        //preenchendo a matriz com as informações do arquivo
            contador = FillingTheMatriz(&Matriz,vetor,contador);
        //fim do preenchimento
            
        //enumeration matrix
            contador_aux++;
        //finhish this operator

        printf("You want init the walking in the matrix in the row?");
        scanf("%d",&initRow);

        printf("You want init the walking in the matrix in the colunm?");
        scanf("%d",&initColunm);

        printf("init this program with the [%d]° matrix in the row [%d] and colunm [%d]\nnow this program will walkin to position that will have the bigger element\n",contador_aux,initRow,initColunm);

        SearchingTheBiggerElement(&Matriz,initColunm,initRow,&Time);

        printf("O tempo para percorrer a matriz foi: %d\n",Time);


        //for print matrix and ask if the user want finish this program
            while( opcao!='N' &&  opcao!='S' ){
                
                //para printar a matriz
                    PrintMatrix(&Matriz);
                //finish

                printf("You want change the constitution of the matrix?[S/N],this is matrix number [%d], if don´t this program will be close\n",contador_aux);
                scanf(" %c",&opcao);
                opcao = toupper(opcao);//garantindo que a resposta será uma letra maiuscula
            }
        //finish this operator

        if(opcao == 'N')break;//finish the while
        opcao = 'p';
    }

    
    

    return 0;
}
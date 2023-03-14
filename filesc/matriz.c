#include "/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/LEITURA DE ARQUIVOS/teste/filesh/matriz.h"

void GeneretaMatrizValues(Matriz *matriz)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matriz->Matriz[i][j].valor = rand()%999;//preencher a matriz
        }
    }
}

void SetMatrizSize(){
    FILE *file;

    file = fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/dados.data","w");
    if(file == NULL){
        printf("This is not open !");
        return ;//vai apenas encerrar o programa
    }

    fprintf(file,"%d %d",rows,columns);
    fprintf(file,"\n");
    fclose(file);
}//esse método é chamado apenas uma vez

void SaveMatriz(Matriz *matriz)
{
    FILE *file;

    fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/dados.data","a");
    if(file == NULL){
        printf("This is not open !");
        return ;//vai apenas encerrar o programa
    }

    GeneretaMatrizValues(matriz);//preenchendo a matriz criada na main

    //escrevendo no arquivo
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                fprintf(file,"%d ",matriz->Matriz[i][j].valor);
            }
            fprintf(file,"\n");
        }
    //fim da escrita
    fprintf(file,"\n");
    fclose(file);   

}

int FillingTheMatriz(Matriz *matriz,int *vetor,int contador){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matriz->Matriz[i][j].valor = vetor[contador];
            contador++;
        }
        
    }
    return contador;
}

void PrintMatrix(Matriz *matriz){

    //para apresentar os componentes ao usuario
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("[%d]",matriz->Matriz[i][j].valor);
            }
            printf("\n");
        }
    //fim do procedimento

}


void SearchingTheBiggerElement(Matriz *matriz,signed int initRow,signed int initColunm,signed int *Time)
{
    //variables of ambience    
        signed int stop = 0;
        signed int Bigger = 0;
        signed int Row;
        signed int Colunm;
        signed int TimeL;
    //finish variables of ambience

    TimeL = 0;//init the time for the walking

    Row = initRow;
    Colunm = initColunm;

    while(stop != 1){

        //to check the houses around where Jack is
        ((Row + 1) < 4) ? ((matriz->Matriz[Row + 1][Colunm].valor > Bigger) ? (Bigger = matriz->Matriz[Row + 1][Colunm].valor):(printf(" "))):(printf("Jack esta na ultima linha"));
        ((Colunm + 1) < 4) ? ((matriz->Matriz[Row][Colunm + 1].valor > Bigger) ? (Bigger = matriz->Matriz[Row][Colunm + 1].valor):(printf(" "))):(printf("Jack esta na ultima coluna\n"));
        ((Colunm + 1) < 4 && (Row + 1) < 4) ? ((matriz->Matriz[Row + 1][Colunm + 1].valor > Bigger) ? (Bigger = matriz->Matriz[Row + 1][Colunm + 1].valor):(printf(" "))):(printf("Jack esta prestes a cair fora\n"));
        //finish the check
        
        TimeL++;//incrementing the time

        (matriz->Matriz[Row + 1][Colunm].valor == Bigger) ? ( Row = Row + 1 ) : ( Bigger = Bigger);//one Row the down
        (matriz->Matriz[Row][Colunm + 1].valor == Bigger) ? ( Colunm = Colunm + 1) : ( Bigger = Bigger );//one Colunm the right
        (matriz->Matriz[Row + 1][Colunm + 1].valor == Bigger) ? ( Colunm = Colunm + 1, Row = Row + 1 ) : ( Bigger = Bigger );//in the diagonally

        printf("%d ",Bigger);
        getchar();

        Bigger = 0;

        (Row == (rows-1) && Colunm == (columns-1)) ? (stop = 1) : (stop = stop);

    }
    *Time = TimeL;//this is used for transient value of the time to the variable Time that be in the file main
}

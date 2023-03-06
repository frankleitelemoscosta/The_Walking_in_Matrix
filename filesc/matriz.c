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

    file = fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/LEITURA DE ARQUIVOS/teste/dados.txt","w");
    if(file == NULL){
        printf("This is not open!");
        return ;//vai apenas encerrar o programa
    }

    fprintf(file,"%d %d",rows,columns);
    fprintf(file,"\n");
    fclose(file);
}//esse método é chamado apenas uma vez

void SaveMatriz(Matriz *matriz)
{
    FILE *file;

    fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/LEITURA DE ARQUIVOS/teste/dados.txt","a");
    if(file == NULL){
        printf("This is not open!");
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


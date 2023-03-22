#include "/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/filesh/matriz.h"

void GeneretaMatrixValues(Matrix *matrix)
{
    for(int i = 0 ; i < rows ; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix->Matrix[i][j].value = rand()%100;//filling in the matrix
        }
    }
}

void SetMatrixSize(){
    FILE *file;

    file = fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/dataset/dados.data","w");
    if(file == NULL){
        printf("This is not open !");
        return ;//vai apenas encerrar o programa
    }

    fprintf(file,"%d %d",rows,columns);
    fprintf(file,"\n");
    fclose(file);
}//esse método é chamado apenas uma vez

void SaveMatrix(Matrix *matrix)
{
    FILE *file;

    fopen("/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/dataset/dados.data","a");
    if(file == NULL){
        printf("This is not open !");
        return ;//vai apenas encerrar o programa
    }

    GeneretaMatrixValues(matrix);//filling in the matrix created in the file main

    //escrevendo no arquivo
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                fprintf(file,"%d ",matrix->Matrix[i][j].value);
            }
            fprintf(file,"\n");
        }
    //fim da escrita
    fprintf(file,"\n");
    fclose(file);   

}

int FillingTheMatrix(Matrix *matrix,int *vetor,int counter){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix->Matrix[i][j].value = vetor[counter];
            counter++;
        }
        
    }
    return counter;
}

void PrintMatrix(Matrix *matrix){

    //para apresentar os componentes ao usuario
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("[ %d ]",matrix->Matrix[i][j].value);
            }
            printf("\n");
        }
    //fim do procedimento

}


void SearchingTheBiggerElement(Matrix *matrix,signed int initRow,signed int initColunm, signed int *sum)
{
    //variables of ambience    
        signed int stop = 0;
        signed int Bigger = 0;
        signed int Row;
        signed int Colunm;
    //finish variables of ambience

    Row = initRow;
    Colunm = initColunm;
    
    //start sum
        *sum += matrix->Matrix[Row][Colunm].value;
        matrix->Matrix[Row][Colunm].value = 0;
    

    while(stop != 1){

        //to check the houses around where Jack is
        ((Row + 1) < rows) ? ((matrix->Matrix[Row + 1][Colunm].value > Bigger) ? (Bigger = matrix->Matrix[Row + 1][Colunm].value):(printf(" "))):(printf(" "));
        ((Colunm + 1) < (columns - 1)) ? ((matrix->Matrix[Row][Colunm + 1].value > Bigger) ? (Bigger = matrix->Matrix[Row][Colunm + 1].value):(printf(" "))):(printf(" "));
        ((Colunm + 1) < (columns - 1) && (Row + 1) < rows) ? ((matrix->Matrix[Row + 1][Colunm + 1].value > Bigger) ? (Bigger = matrix->Matrix[Row + 1][Colunm + 1].value):(printf(" "))):(printf(" "));
        ((Colunm - 1) > (-1)) ? ((matrix->Matrix[Row][Colunm - 1].value > Bigger) ? (Bigger = matrix->Matrix[Row][Colunm - 1].value) : (Bigger = Bigger)) : (printf(" "));
        ((Colunm - 1) > (-1) && (Row + 1) < (rows - 1)) ? ((matrix->Matrix[Row + 1][Colunm - 1].value > Bigger) ? (Bigger = matrix->Matrix[Row + 1][Colunm - 1].value) : (Bigger = Bigger)) : (printf(" "));
        //finish the check

        (matrix->Matrix[Row + 1][Colunm].value == Bigger && Row < (rows - 1)) ? ( *sum += matrix->Matrix[Row + 1][Colunm].value ,matrix->Matrix[Row + 1][Colunm].value = 0, Row = Row + 1 ) : ( Bigger = Bigger);//one Row the down
        (matrix->Matrix[Row][Colunm + 1].value == Bigger && Row < (rows - 1)) ? ( *sum += matrix->Matrix[Row][Colunm + 1].value ,matrix->Matrix[Row][Colunm + 1].value = 0, Colunm = Colunm + 1 ) : ( Bigger = Bigger );//one Colunm the right
        (matrix->Matrix[Row + 1][Colunm + 1].value == Bigger && Row < (rows - 1)) ? ( *sum += matrix->Matrix[Row + 1][Colunm + 1].value ,matrix->Matrix[Row + 1][Colunm + 1].value = 0, Colunm = Colunm + 1, Row = Row + 1 ) : ( Bigger = Bigger );//in the diagonally
        (matrix->Matrix[Row][Colunm - 1].value == Bigger && Row < (rows - 1)) ? ( *sum += matrix->Matrix[Row][Colunm - 1].value ,matrix->Matrix[Row][Colunm - 1].value = 0, Colunm = Colunm - 1) : ( Bigger = Bigger );
        (matrix->Matrix[Row + 1][Colunm - 1].value == Bigger && Row < (rows - 1)) ? ( *sum += matrix->Matrix[Row + 1][Colunm - 1].value ,matrix->Matrix[Row + 1][Colunm - 1].value = 0, Colunm = Colunm - 1, Row = Row + 1 ) : ( Bigger = Bigger );//in the diagonally

        (Row == (rows - 1)) ? (*sum += matrix->Matrix[Row][Colunm + 1].value , matrix->Matrix[Row][Colunm + 1].value = 0, Colunm = Colunm + 1) : (Row = Row);//for to check if the jack is in the last row

        Bigger = 0;

        (Row == (rows-1) && Colunm == (columns - 1)) ? (stop = 1) : (stop = stop);//stop the search

    }
}

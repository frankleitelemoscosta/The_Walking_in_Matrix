#include <stdio.h>
#include<string.h>
#include"/home/frank/Documentos/TODOS OS ARQUIVOS(ATIVIDADES, LIVROS, ETC)DA FACULDADE/TERCEIRO PERÍODO/AEDS/Actives/First_active_AEDS/filesh/matriz.h"
#include<math.h>
#include <ctype.h>

int main() {
    //environment variables
        signed int numberMatrices = 1;
        Matriz Matrix;
        int Counter = 0;
        signed int stop = 1;
        int *vet;
        signed int Rows;
        signed int Colunms;
        int HousesOfvet;
        char option; 
        signed int Counter_aux;
        signed int initRow;
        signed int initColunm;
        int sum;
    //finish the environment variables
    
    option = 'P';//init the variable

    //write the file
        SetMatrixSize();
        for (int i = 0; i < numberMatrices; i++)
        {
            SaveMatrix(&Matrix);
        }
    //finish the write

    //open the file to remove the matrices
        FILE *file;

        file = fopen("dados.data","r");
        if(file == NULL){
            printf("This is not open!");
            return 1;//finish the program and return the value 1
        }
    //finish the procedure

    //catch the number of Rows and Colunms
        while(stop != 0){
            //for catch the size of the matrix
                if(Counter < 1){
                    while(fscanf(file,"%d",&Rows) == 1)
                    {
                        Counter ++;
                        if(Counter == 2)
                        {
                            break;
                        }
                    }
                    Colunms = Rows;
                    HousesOfvet = pow(Rows,2);
                }
            //end of information collection

            break;
        }
    //end of the collection of data

    //vet allocation
        vet = (int *)malloc((HousesOfvet * numberMatrices) * sizeof(int));
    //end alocation

    // filling in the vet
        for(int i = 0 ; i < (HousesOfvet * numberMatrices); i++){
            fscanf(file,"%d",&vet[i]);
        }
    //end the filling

    //close file
        fclose(file);
    //end close

    Counter = 0;//restart the Counter for that possible use be variable
    sum = 0;
    Counter_aux = 0;

    //filling in and search the bigger element in the matrix
    while(stop !=0)
    {
        //filling in the matrix with the informations of the data file
            Counter = FillingTheMatriz(&Matrix,vet,Counter);
        //end procedure
            
        //enumeration matrix
            Counter_aux++;
        //finish this operator

        printf("You want init the walking in the matrix in the row?");
        scanf("%d",&initRow);

        printf("You want init the walking in the matrix in the colunm?");
        scanf("%d",&initColunm);

        printf("init this program with the [%d]° matrix in the row [%d] and colunm [%d]\nnow this program will walkin to position that will have the bigger element\n",Counter_aux,initRow,initColunm);

        SearchingTheBiggerElement(&Matrix,initColunm,initRow,&sum);

        printf("The sum of the elements of the matrix is: (%d)\n",sum);


        //for print matrix and ask if the user want finish this program
            while( option!='N' &&  option!='S' ){
                
                //para printar a matriz
                    PrintMatrix(&Matrix);
                //finish

                printf("You want change the constitution of the matrix?[S/N],this is matrix number [%d], if don´t this program will be close\n",Counter_aux);
                scanf(" %c",&option);
                option = toupper(option);//garantindo que a resposta será uma letra maiuscula
            }
        //finish this operator

        if(option == 'N')break;//finish the while
        option = 'p';
    }

    
    

    return 0;
}
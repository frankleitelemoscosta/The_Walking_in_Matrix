//for the compiler to identify that this file was compiled
    #ifndef MATRIZ_H
    #define MATRIZ_H
//end

//libraries
    #include<stdio.h>
    #include<stdlib.h>
//end libraries


#define rows 4
#define columns 4

//components of the matrix
    typedef struct Item{
        int value;
    }Item;
//end of the components

//matrix of the Item type
    typedef struct Matrix{
        Item Matrix[rows][columns];
    }Matrix;
//end of the matrix

//methods referring to the two structures
    void GeneretaMatrixValues(Matrix *matrix);//this method serves to generate values ​​to compose the matrix
    void SetMatrixSize();//this method serves to save the size of the matrix in the file
    void SaveMatrix(Matrix *matrix);//this method serves to write the matrix in the file
    int FillingTheMatrix(Matrix *matrix,int *vetor,int counter);
    void PrintMatrix(Matrix *matrix);//this method is used strictly to print the matrix
    void SearchingTheBiggerElement(Matrix *matrix,signed int initRow,signed int initColunm, signed int *sum);
//end of methods or functions

#endif
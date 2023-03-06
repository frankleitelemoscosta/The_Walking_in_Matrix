//para o compilador identificar que este arquivo foi compilado
    #ifndef MATRIZ_H
    #define MATRIZ_H
//fim

//bibliotecas
    #include<stdio.h>
    #include<stdlib.h>
//fim bibliotecas


#define rows 4
#define columns 4

//compenentes da matriz
    typedef struct Item{
        int valor;
    }Item;
//fim dos componentes

//matriz do tipo dos itens
    typedef struct Matriz{
        Item Matriz[rows][columns];
    }Matriz;
//fim da matriz

//métodos referentes as duas estruturas
    void GeneretaMatrizValues(Matriz *matriz);//esse métodos serve para gerar valores para compor a matriz
    void SetMatrizSize();//esse métodos serve para salvar no arquivo o tamanho da matriz
    void SaveMatriz(Matriz *matriz);//esse método serve para escrever a matriz no arquivo
    int FillingTheMatriz(Matriz *matriz,int *vetor,int contador);
//fim dos métodos ou funções

#endif
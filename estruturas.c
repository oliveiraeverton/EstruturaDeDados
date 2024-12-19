#include ".\estruturas.h"
#include <stdio.h>


void menu(){

    printf("#### Selecione uma opção para criar uma *Lista Encadeada* ####\n");
    printf("1 - Lista simplesmente encadeada e não ordenada\n");
    printf("2 - Lista simplesmente encadeada e ordenada\n");
    printf("3 - Lista duplamente encadeada e não ordenada\n");
    printf("4 - Lista duplamente encadeada e ordenada\n");
}


void opcaoListaEncadeada(int* opcao){
    scanf("%d", opcao);
    // observação não pe necessário passar &opcao porque opcao já é um endereco de memória
}
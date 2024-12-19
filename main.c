#include<stdio.h>
#include ".\estruturas.h"

int main(){

    //variaveis locais de controle do programa
    int opcao =0;

    
    do{
        menu();
        opcaoListaEncadeada(&opcao);

    }while(opcao!=0);

    return 0;
}
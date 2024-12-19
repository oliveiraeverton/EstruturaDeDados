//estruturas.h
//Possui inicializações e funções para as estrutura de dados mais comumente utilizadas.

#include<stdio.h>

// Protótipos das funções da 
// biblioteca.
/////////////////////////////////////

// A função menu mostra no terminal uma lista de opções que o usuário poderá escolher para inicializar uma lista
//
//
void menu();


//A função opcaoListaEncadeada recebe o endereco de um inteiro e devolve um para o local de memória um inteiro que corresponde uma opcao do menu
//selecionada pelo usuário
void opcaoListaEncadeada(int* opcao);
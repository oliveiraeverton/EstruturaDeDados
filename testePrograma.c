//Para compilar use:
//gcc -o testePrograma testePrograma.c estruturas.c Unity-master/src/unity.c -IUnity-master/src
//o arquivo unity.c deverá estar corretamente nesse tipo de estrutura
#include "./Unity-master/src/unity.h"
#include <stdio.h>
#include "./estruturas.h"
#include <stdlib.h>
#include <time.h>

void setUp(void) {
    // Código para configurar o ambiente de teste
}

void tearDown(void) {
    // Código para limpar o ambiente de teste após cada execução
}
void test_opcaoListaEncadeada1(void) {
    int opcao = 2;
    printf("Digite (1)\n");
    opcaoListaEncadeada(&opcao);
    TEST_ASSERT(opcao >= 1 && opcao <= 4);  // Verifica se a opção está entre 1 e 4
}
void test_opcaoListaEncadeada2(void) {
    int opcao = 2;
    printf("Digite (2)\n");
    opcaoListaEncadeada(&opcao);
    TEST_ASSERT(opcao >= 1 && opcao <= 4);  // Verifica se a opção está entre 1 e 4
}

void opcaoRetornoRandomico(void){

    int opcao = 2;
    int numeroRandomico = rand();
    printf("Digite (%d)\n", numeroRandomico);
    opcaoListaEncadeada(&opcao);
    TEST_ASSERT(opcao == numeroRandomico);
}

void quebrarLoop(void){
    int opcao;
    
    printf("Digite (0)\n");
    opcaoListaEncadeada(&opcao);
    TEST_ASSERT(opcao == 0);
}


int main(void) {
    UNITY_BEGIN();
    srand(time(0));  // Usado para garantir que os números sejam realmente aleatórios

    // Adiciona os testes aqui
    //RUN_TEST(test_menu);
    RUN_TEST(test_opcaoListaEncadeada1);
    RUN_TEST(test_opcaoListaEncadeada2);
    RUN_TEST(opcaoRetornoRandomico);
    RUN_TEST(quebrarLoop);

    return UNITY_END();
}






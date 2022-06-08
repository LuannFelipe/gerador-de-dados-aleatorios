#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    //Nome do arquivo txt para salvar os dados
    char arquivo[] = {"dados.txt"};

    //Quantidade de dados g'erados
    int qtd = 10000;

    //Criar o arquivo txt
    FILE *dataFile = fopen(arquivo, "w");

    //verifica se houve algum erro na criação do arquivo
    if(dataFile == NULL)
    {
        printf("ERRO");

        //Sair do programa
        exit(1);
    } else{

        //Cria uma seed baseada no tempo atual
        srand(time(NULL));

        //loop para escrever cada dado no arquivo
        for(int i = 0; i < qtd; i++)
        {

            fprintf(dataFile,"%d\n",rand());
        }

        //fechar o arquivo
        fclose(dataFile);

        printf("Dados inseridos com sucesso");
    }


    return 0;
}

// Rafael Stefanini Carreira

//Fa�a um programa em Linguagem C para criar uma estrutura cujos campos s�o: notaprova, notatrabalho, m�dia e nome.
//Ler o nome, as notas do aluno e calcular a m�dia do bimestre, armazenando o valor no campo m�dia.
//Imprimir os dados iniciais e a m�dia calculada.

#include<stdio.h>

main()
{
    struct notas	//registro que guarda as informa��es do aluno
    {
        float notaprova;
        float notatrabalho;
        float media;
        char nome[50];
    }not;

    //leitura das informa��es

    printf("Digite o nome do aluno: ");
    scanf("%s",&not.nome);

    printf("Digite a nota da prova: ");
    scanf("%f",&not.notaprova);

    printf("Digite a nota do trabalho: ");
    scanf("%f",&not.notatrabalho);

    //calculo da m�dia e saidas

    not.media = (not.notaprova + not.notatrabalho)/2;

    printf("\n-------- Dados do Aluno -----------");
    printf("\nNome: %s",not.nome);
    printf("\nNota da prova: %.2f",not.notaprova);
    printf("\nNota do Trabalho: %.2f",not.notatrabalho);
    printf("\nMedia: %.2f\n",not.media);
}

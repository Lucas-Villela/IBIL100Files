//Rafael Stefanini Carreira

//Repita o programa anterior considerando que o ponteiro deve apontar (inicialmente) para uma vari�vel num.
//A vari�vel num armazena um valor informado pelo usu�rio.
//Os resultados (endere�os) s�o diferentes dos obtidos no exerc�cio 1? Explique.

#include<stdio.h>

main()
{
    int *p;
    int i,num;

    scanf("%d" , &num);
    p = &num;

    for(i=0;i<5;i++)
    {
        printf("%p\n",p);
        p++;
    }
}

//R: Sim, pois agora o ponteiro aponta inicialmente pra alguma posi��o da mem�ria (!= NULL)

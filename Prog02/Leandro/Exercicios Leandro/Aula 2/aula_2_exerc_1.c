//Rafael Stefanini Carreira

//Utilizando um la�o (de 0 at� 4), apresente o endere�o de um ponteiro inteiro incrementado de 1.

#include<stdio.h>

main()
{
    int *p;
    int i;

    for(i=0; i<5;i++)
    {
        printf("%p\n ", p);
        p++;
    }
}

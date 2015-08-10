//Rafael Stefanini Carreira

//Considerando o exerc�cio 2, converta os endere�os para decimal e apresente a diferen�a em bytes entre os mesmos.
//Os resultados correspondem aos valores dos respectivos incrementos definidos no la�o.
//Explique.

#include<stdio.h>

int main()
{
    int *p1,*p2;
    int num,i;

    puts("Digite um num: ");
    scanf("%d" , &num);
    p1=&num;
    p2=&num;

    for(i=0;i<5;i++)
    {
        printf("p1: %d\n",p1);
        p1++;
    }
    
    printf("\nDiferen�a ap�s o fa�o: %ld ", (p1-p2) * sizeof(int));
}

//R: Sim, pois a cada incremento adiciona sizeof(int) na posi��o de memoria
// sizeof(int) = 4
// incrementos = 5
// diferen�a em bytes = 20


//Rafael Stefanini Carreira

//Considerando o exerc�cio anterior, � poss�vel realizar as compara��es envolvendo vari�veis e ponteiros correspondentes com tipos de dados diferentes. Por exemplo, int num; float num 1; double num 2.
//Quais s�o os resultados? Justifique sua resposta.

#include<stdio.h>

main()
{
    int num, *p;
    float num1,*p1;
    double num2,*p2;

    puts("Digite int, float, double: ");
    scanf("%d %f %lf", &num,&num1,&num2);

    p = &num;
    p1=&num1;
    p2=&num2;

    printf("\n\nnum: %d\np: %p\n\nnum1: %f\np1: %p\n\nnum2: %lf\np2: %p",num,p,num1,p1,num2,p2);

    puts("\n-----------------------------------\n");
    if(p < p1 && p1 < p2 )
	puts("O modelo est� correto!");
    else
	puts("O modelo est� incorreto!");

}

//R: Sim, os dados s�o armazenados na mem�ria da mesma maneira, mudando somente o seu tamanho ocupado.

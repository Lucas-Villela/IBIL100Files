//Rafael Stefanini Carreira

//Considerando dois ponteiros inteiros, mostre o endere�o do ponteiro 1, do ponteiro 2 e a diferen�a (em bytes) entre os endere�os desses ponteiros.
//Em seguida, incremente um dos ponteiros em pelo menos 1 posi��o na mem�ria e mostre os resultados.

#include<stdio.h>

main()
{
    int *p1, *p2;
    int n1,n2;

    puts("n1: ");
    scanf("%d",&n1);
    p1=&n1;

    puts("n2: ");
    scanf("%d",&n2);
    p2=&n2;

    printf("\np1: %p\n", p1);
    printf("p2: %p\n", p2);
    printf("diferen�a: %ld\n", (p2-p1) * sizeof(int));

    p2++;
    puts("\nap�s incrementar p2\n");

    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);
    printf("diferen�a: %ld\n", (p2-p1) * sizeof(int));

}

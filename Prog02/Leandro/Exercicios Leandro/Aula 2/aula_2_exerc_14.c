//Rafael Stefanini Carreira

//O que as linhas abaixo fazem?

int a=3, b=9; // declara��o e atribui��o de suas variaveis int
int *p;  // declara��o de um ponteiro para int
int *q;  // declara��o de um ponteiro para int
p = &a;  // o ponteiro p recebe o endere�o de mem�ria de a
q = &b;  // o ponteiro q recebe o endere�o de mem�ria de b
int c = *p + *q;  // declara uma variavel int com a soma dos valores apontados por p e q, no caso, 3 + 9

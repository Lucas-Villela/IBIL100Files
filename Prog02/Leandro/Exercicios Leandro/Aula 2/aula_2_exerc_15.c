//Rafael Stefanini Carreira

//O que as linhas abaixo fazem?


int i=4, j=6;  // Declara��o e atribui��o de duas vari�veis int
int *p;    // declara��o de um ponteiro para int
int **r;  // declara��o de um ponteiro para um ponteiro de int 
p = &i;   // p recebe o endere�o de mem�ria de i
r = &p;   // r recebe o endere�o de mem�ria do ponteiro p
c = **r + j;   // c recebe a soma do de j e do valor apontado por pelo ponteiro que r aponta, r aponta para p, e p aponta para i, ent�o **r = i


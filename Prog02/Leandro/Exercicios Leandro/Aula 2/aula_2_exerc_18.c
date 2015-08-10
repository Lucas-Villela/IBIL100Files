//Rafael Stefanini Carreira

//Escreva uma fun��o (m�todo) para alterar as posi��es da diagonal principal de uma matriz m, sendo que o total de linhas � 10. A matriz m foi definida em main. 
//O m�todo deve retornar m com: 0 para elemento da diagonal que seja menor que a soma dos valores contidos na diagonal; e, 1 para caso contr�rio.
//A fun��o respons�vel por manipular os valores da diagonal principal deve ser escrita com as abordagens: *m; m[]; m[][10]. 
//Salve cada abordagem como um programa novo.

#include<stdio.h>

int** altera(int m[][10])
{
	int i, sum;
	for(i=0; i<10; i++)
		sum += m[i][i]; //acumula os valores da diagonal principal
	
	for(i=0; i<10; i++)
	{
		if(m[i][i]>sum) // se maior que a soma
			m[i][i] = 1;
		else 		//senao
			m[i][i] = 0;  
	}
	return m;
}


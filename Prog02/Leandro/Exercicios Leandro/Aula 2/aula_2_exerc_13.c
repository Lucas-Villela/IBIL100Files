//Rafael Stefanini Carreira

//Considere o exerc�cio 11. Apresente os endere�os de mem�ria de cada struct e dos ponteiros correspondentes. 
//� poss�vel executar incrementos simples, como somar +1, +2 e +3 a cada ponteiro, a partir dos endere�os das structs. 
//Se sim, quais os respectivos endere�os e diferen�as em bytes entre os mesmos. 
//Ainda em caso de positivo, o que cada incremento representa? Explique utilizando um modelo esquem�tico de mem�ria. Caso n�o seja poss�vel, justifique sua resposta.

//Sim, � possivel. A cada incremento pulamos para a "proxima estrutura do mesmo tipo" e assim depende do tamanho que o struct ocupa na memoria.
//EX: Se a estrutura ocupar 4 bytes, a cada incremento estaremos pulando 4 bytes na mem�ria.



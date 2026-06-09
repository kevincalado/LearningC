#include<stdio.h>
#include<string.h>
void main (void){
	char musica[150], opiniao[150], caractere[1];
	int tMusica, tOpiniao;
	printf("Digite uma frase de uma musica: \n");
	gets(musica);
	printf("\nDigite sua opiniao sobre essa essa frase da musica: \n");
	gets(opiniao);
	printf("\nA frase da musica digitada foi:\n%s\n", musica);
	printf("\nA opiniao da musica digitada foi:\n%s\n", opiniao);
	tMusica = strlen(musica);
	tOpiniao = strlen(opiniao);
	if(tMusica > tOpiniao){
		printf("\nMusica e MAIOR que opiniao, com %d caracteres.", tMusica);
	}else{
		printf("\nOpiniao e MAIOR que musica, com %d caracteres.", tOpiniao);
	}
	strcat(opiniao,musica);
	printf("\nOpiniao apos ser concatenada:\n");
	printf("%s", opiniao);
	//printf("\nDigite apenas um carectere para buscar corresponeia em opiniao: ");
	//gets(caractere);

	//infelizmente não consegui encontrar a quantidade de caractere no texto
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int numero = rand ();
	int chute, numeroaleatorio;
	int tamanho;
	
	int dificuldade;
	int tentativas=0, jogadas=0;
	int cont=0;
	
		setlocale (LC_ALL, "Portuguese");
	
	printf ("Escolha uma dificuldade\n1-F�cil (20 Tentativas)\n2-M�dio (15 Tentativas)\n3-Dif�cil (5 Tentativas)\nDificuldade:");
	scanf ("%d", &dificuldade);
	
	switch (dificuldade){
			case 1:
				tamanho=10;
			tentativas = 20;
				break;
			case 2:
				tamanho=100;
			tentativas = 15;
				break;
			case 3:
				tamanho=1000;	
			tentativas = 5;
				break;
				default:
					printf ("Essa op��o n�o correspondente ao caso. Tente 1, 2 ou 3.");
					while(getchar() != '\n');
            getchar();
            return 0;
		}
				double pontos = 1000;
		srand (time(NULL));
		
				int numerosecreto = rand () % 100;
				
			do{
		printf("\nDigite o n�mero: ");
		scanf("%d", &numero);
		jogadas++;
		
		if(numero == numerosecreto){
			printf("Parabens, voc� acertou! Ir� adquirir pontos.\n", tentativas-jogadas);
			break;
		} else if
			(numero < numerosecreto) {
				
				printf ("\nO n�mero secreto � maior que o seu digitado.\n");
				printf("\n%d jogadas\n", jogadas, tentativas);
			} else if
				(numero > numerosecreto){
					printf ("O n�mero secreto � menor que o seu digitado.");
					printf ("\n%d jogadas\n", jogadas, tentativas);
					cont = tentativas; 
				}	
			
		cont ++;
		
		if (cont > tentativas) {
			break;
		}
	}while (numero != numeroaleatorio);
	
	
	if(jogadas == tentativas && cont <= tentativas){
        printf("\nVoc� errou todas as jogadas! Voc� perdeu!");
      	printf("\nO n�mero sorteado era: %d\n", numerosecreto);
    }
    else{
        printf("\nVoc� acertou! Sua pontua��o%d\n", pontos++);
    }
}


			




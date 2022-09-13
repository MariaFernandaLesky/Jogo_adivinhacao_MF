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
	
	printf ("Escolha uma dificuldade\n1-Fácil (20 Tentativas)\n2-Médio (15 Tentativas)\n3-Difícil (5 Tentativas)\nDificuldade:");
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
					printf ("Essa opção não correspondente ao caso. Tente 1, 2 ou 3.");
					while(getchar() != '\n');
            getchar();
            return 0;
		}
				double pontos = 1000;
		srand (time(NULL));
		
				int numerosecreto = rand () % 100;
				
			do{
		printf("\nDigite o número: ");
		scanf("%d", &numero);
		jogadas++;
		
		if(numero == numerosecreto){
			printf("Parabens, você acertou! Irá adquirir pontos.\n", tentativas-jogadas);
			break;
		} else if
			(numero < numerosecreto) {
				
				printf ("\nO número secreto é maior que o seu digitado.\n");
				printf("\n%d jogadas\n", jogadas, tentativas);
			} else if
				(numero > numerosecreto){
					printf ("O número secreto é menor que o seu digitado.");
					printf ("\n%d jogadas\n", jogadas, tentativas);
					cont = tentativas; 
				}	
			
		cont ++;
		
		if (cont > tentativas) {
			break;
		}
	}while (numero != numeroaleatorio);
	
	
	if(jogadas == tentativas && cont <= tentativas){
        printf("\nVocê errou todas as jogadas! Você perdeu!");
      	printf("\nO número sorteado era: %d\n", numerosecreto);
    }
    else{
        printf("\nVocê acertou! Sua pontuação%d\n", pontos++);
    }
}


			




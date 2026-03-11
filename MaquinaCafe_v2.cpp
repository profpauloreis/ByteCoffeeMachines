#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main() {	
	int op, custo=0, moeda, creditos;
	do {
		//exibir o menu de produtos
		system("cls");
		printf("\n\n\t");
		puts("\t:: Menu principal");
		printf("\t");
		for (int i=1; i<39; i++)
			putchar('-');
			
		printf("\n\t (1) Caf%c longo\t\t(70 c%cntimos)", 130, 136);
		printf("\n\t (2) Caf%c curto\t\t(70 c%cntimos)", 130, 136);
		printf("\n\t (3) Caf%c pingado\t(80 c%cntimos)", 130, 136);
		printf("\n\t (4) Cappucino\t\t(95 c%cntimos)", 136);
		printf("\n\t (5) Chocolate\t\t(85 c%cntimos)", 136);
		printf("\n\t (6) Gal%co\t\t(95 c%cntimos)", 132, 136);
		printf("\n\t (7) Ch%c de lim%co\t(60 c%cntimos)", 160, 132, 136);
		printf("\n\n\t  Digite a sua op%c%co: ", 135, 132);
		scanf("%d", &op);
		fflush(stdin);
		
		/*se for digitado -99 significa que a maquina vai
		ser desligada, por isso não será necessário correr
		o bloco de instruções do switch, ficando assim o
		programa mais rápido a ser executado e finalizado*/
		if (op!=-99) {
			//verificar qual o produto e o respetivo custo
			switch(op) {
				case 1 : 	printf("\n\tCaf%c longo", 130);
							custo=70;
							break;

				case 2 : 	printf("\n\tCaf%c curto", 130);
							custo=70;
							break;	
						
				case 3 : 	printf("\n\tCaf%c pingado", 130);
							custo=80;
							break;		

				case 4 : 	printf("\n\tCappucino");
							custo=95;
							break;	
						
				case 5 : 	printf("\n\tChocolate");
							custo=85;
							break;	

				case 6 : 	printf("\n\tGal%co", 132);
							custo=95;
							break;	
						
				case 7 : 	printf("\n\tCh%c de lim%co", 160, 132);
							custo=60;
							break;	
						
				default: 	printf("\n\tOp%c%co inv%clida.",135,132,160);	
							custo=0;
						 	getch();
																																	
			}
			
			/*se for digitada uma opçao invalida, então a var custo 
			terá o valor zero, o que significa que não se vai ser 
			feito o pedido de inserção de moedas*/
			if (custo>0) {
				//controlar inserção de moedas 
				//colocar a variável creditos a zero
				creditos=0;				
				do {
					printf("\n\tCreditos= %d. ", creditos);
					printf("Em falta = %d.",
					      creditos<custo ? custo-creditos: 0);
					
					printf("\n\tInsira moeda: ");
					scanf("%d", &moeda);
					fflush(stdin);
					//verificar se as moedas são as aceites pela maquina
					if (moeda==5 || moeda==10 || moeda==20 || moeda==50 || 
						moeda==100 || moeda==200) 
						creditos += moeda;
					
				} while (creditos < custo);
				//verificar se existe troco a dar
				if (creditos > custo) 
					printf("\n\tO seu troco= %d.", creditos-custo);

				printf("\n\tRetire a sua bebida. Obrigado.\n\n");
				system("pause");
					
			}
		}	
	
	} while (op!=-99);
	
	puts("\t\t\t---bye---");
	
	return 0;
}




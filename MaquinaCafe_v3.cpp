#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu() {
	//exibir o menu de produtos
	system("cls");
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
}

int escolha() {
	int opcao;
	printf("\n\n\t  Digite a sua op%c%co: ", 135, 132);
	scanf("%d", &opcao);
	fflush(stdin);
	return opcao;
}

int precoProduto (int numero) {
	//verificar qual o produto e o respetivo custo
	int custo;
	switch(numero) {
		case 1 : printf("\n\tCaf%c longo", 130); custo=70; break;
		case 2 : printf("\n\tCaf%c curto", 130); custo=70; break;							
		case 3 : printf("\n\tCaf%c pingado", 130); custo=80; break;		
		case 4 : printf("\n\tCappucino"); custo=95; break;				
		case 5 : printf("\n\tChocolate"); custo=85;	break;	
		case 6 : printf("\n\tGal%co", 132);	custo=95; break;			
		case 7 : printf("\n\tCh%c de lim%co", 160, 132); custo=60; break;				
		default: printf("\n\tOp%c%co inv%clida.",135,132,160);	
				 custo=0;
				 getch();																														
	}
	return custo;
}

int valorInserido() {
	printf("\n\tInsira moeda: ");
	int m;
	scanf("%d", &m);
	fflush(stdin);
	//verificar se as moedas são as aceites pela maquina
	if (m==5 || m==10 || m==20 || m==50 ||m==100 || m==200) 
		return m;
	else
		return 0;
}

void pagamentoRealizado(int creditos, int custo) {
	printf("\n\tCreditos= %d. ", creditos);
	printf("Em falta = %d.", creditos<custo ? custo-creditos: 0);
}

void entregaBebida() {
	printf("\n\tRetire a sua bebida. Obrigado.\n\n");
	system("pause");	
}

int main() {	
	int op, custo=0, creditos;	
	do {
		menu();
		op = escolha();
		if (op!=-99) {
			custo = precoProduto(op);
			if (custo>0) {
				creditos=0;				
				do {
					pagamentoRealizado(creditos, custo);	
					creditos += valorInserido();	
				} while (creditos < custo);				
				if (creditos > custo) 
					printf("\n\tO seu troco= %d.", creditos-custo);
				entregaBebida();	
			}
		}
	} while (op!=-99);
	puts("\t\t\t---bye---");	
	return 0;
}	

	

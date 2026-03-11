/* máquina de café ver 1.0 */
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale(LC_ALL, "portuguese");
	float preco;
	int opcao;
	system("Color A");
	printf("\n\t+-------------------------------------------------------+\t");
	printf("\n\t|               :/La Máquina di Café\\:                  |\t");
	printf("\n\t|                                                       |\t");
	printf("\n\t|   (1) Café espresso          (2) Café pingado         |\t");	
	printf("\n\t|   (3) Café longo             (4) Café curto           |\t");	
	printf("\n\t|   (5) Descafeinado longo     (6) Descafeinado curto   |\t");
	printf("\n\t|   (7) Galão                  (8) Regular o açucar     |\t");
	printf("\n\t|                                                       |\t");
	printf("\n\t+-------------------------------------------------------+\t");
	printf("\n\t| ===»»» Digite o número da sua escolha?          ««=== |\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%d", &opcao);
	switch (opcao) {
		case 1: preco = 0.60; 
				printf("\n\t\t => Café espresso %.2f", preco);
				break;
		case 2: preco = 0.70; 
				printf("\n\t\t => Café pingado %.2f", preco);
				break;	
		case 3: preco = 0.50; 
				printf("\n\t\t => Café longo %.2f", preco);
				break;
		case 4: preco = 0.50; 
				printf("\n\t\t => Café curto %.2f", preco);
				break;	
		case 5: preco = 0.55; 
				printf("\n\t\t => Descafeinado longo %.2f", preco);
				break;	
		case 6: preco = 0.55; 
				printf("\n\t\t => Descafeinado curto %.2f", preco);
				break;	
		default: printf("\n\t\t !!! Opção não válida.\n\n");																									
	}
	printf("\n\n\t\tInsira valor: \n\n\n");
	return 0;
}

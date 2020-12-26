#include <stdio.h>
int main(){
	
	int mat [3][4];
	int linha,coluna,contpar=0,contimpar=0;
	printf("\nDigite um numero:\n");
	
	for (linha=0;linha<3;linha++)
		for(coluna=0;coluna<4;coluna++)
{		printf("Elemento [%d] [%d] = ",linha,coluna);
		scanf("%d",&mat[linha] [coluna]);
}
	printf("\n *************** Saida de Dados *************** \n");

			for (linha=0;linha<3;linha++)
			for(coluna=0;coluna<4;coluna++)
{
			if(mat[linha][coluna] %2==0)
			contpar++;
			
			else
			contimpar++;
}
	printf("\n Quantidade de numeros pares: %d \n",contpar);	
	printf("\n Quantidade de numeros impares: %d \n",contimpar);
	return 0;
}

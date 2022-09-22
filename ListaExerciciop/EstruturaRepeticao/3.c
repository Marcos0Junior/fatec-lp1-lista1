#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1 = 1, n2 = 0, soma;
	while(n1 > n2){
		system("cls");
		printf("O primeiro valor deve ser maior que o primeiro!\n");
		printf("Digite um numero: ");
		scanf("%d", &n1);
		printf("Digite um segundo numero: ");
		scanf("%d", &n2);	
	}
	
	int i;
	
	for(i = n1; i <= n2; i++){
		soma += i;
	}
	
	printf("Valor soma: %.2d", soma);
}

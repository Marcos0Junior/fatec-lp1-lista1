#include<stdio.h>

int main(){
	float n;
	printf("Digite uma medida em polegadas: ");
	scanf("%f", &n);
	printf("Valor em CM: %.2f\n", n*2.54);
	
	return 0;
}

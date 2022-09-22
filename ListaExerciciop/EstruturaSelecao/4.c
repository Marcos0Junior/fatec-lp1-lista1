#include<stdio.h>

int main(){
	float n1, n2, media;
	printf("Digite um numero: ");
	scanf("%f", &n1);
	printf("Digite um segundo numero: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2; 
	
	if(media < 6){
		printf("%.2f - Reprovado", media);
		return 0;
	}
	
	printf("%.2f - Aprovado", media);
	return 0;
}

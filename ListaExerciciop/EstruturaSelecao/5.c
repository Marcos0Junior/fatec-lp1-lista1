#include<stdio.h>

int main(){
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d", &idade); 
	
	if(idade <= 8){
		printf("infantil A");
		return 0;
	}
	
	if(idade <= 10){
		printf("infantil B");
		return 0;
	}
	
	if(idade <= 13){
		printf("juvenil A");
		return 0;
	}
	
	if(idade <= 17){
		printf("juvenil B");
		return 0;
	}
	
	printf("adulto");
	return 0;
}

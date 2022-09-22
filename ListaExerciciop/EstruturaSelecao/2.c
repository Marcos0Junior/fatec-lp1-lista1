#include<stdio.h>

int main(){
	float n = 0;
	printf("Digite quantas macas voce deseja : ");
	scanf("%f", &n);
	
	if(n<12){
		printf("Custo: %.2f", n*1.30);
		return 0;
	}
	
	printf("Custo: %.2f", n);
	return 0;
}

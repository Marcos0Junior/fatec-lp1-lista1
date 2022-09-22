#include<stdio.h>

int main(){
	int n = 0, fatoirial = 1;
	printf("Digite um numero: ");
	scanf("%d", &n);	
	
	if(n == 0){
		printf("Fatorial é: %d", 1);
		return 0;
	}
	
	int i;
	
	for(i = n; i >= 1; i--){
		fatoirial *= i;
	}
	
	printf("Fatorial e: %.2d", fatoirial);
}

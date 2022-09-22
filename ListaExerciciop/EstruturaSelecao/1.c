#include<stdio.h>

int main(){
	int n1, n2;
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um segundo numero: ");
	scanf("%d", &n2);
	
	if(n1==n2){
		printf("Os valores sao iguais!");
		return 0;
	}
	
	printf("Os valores são diferentes!");
	return 0;
}

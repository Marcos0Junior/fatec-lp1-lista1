#include<stdio.h>

int main(){
	float c = 1.50, j = 1.10;
	int anos = 0;
	
	while(anos < anos+1){
		c += 0.02;
		j += 0.03;
		anos++;
		
		if(c < j){
			printf("%d anos.", anos);
			return 0;
		}
	}
}

#include <stdio.h>
int x, y;
int main(){
	printf("Inserisci il numero. \n");
	scanf("%d", &x);
	y=x%2;
	if(y==1){
		printf("Il numero e' dispari");
	}
	else if(y==0){
		printf("Il numero e' positivo");
	}
	else{
		printf("Il numero non e' valido :(");
	}
}

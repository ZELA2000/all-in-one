#include <stdio.h>
int x, y;
int main(){
	printf("Inserisci il numero. \n");
	scanf("%d", &x);
	switch(y=x%2){
		case 1:
			printf("il numero e' dispari.");
			break;
		case 0:
			printf("Il numero e' pari.");
			break;
		default:
			printf("Il numero non e' valido :(");
	}
}

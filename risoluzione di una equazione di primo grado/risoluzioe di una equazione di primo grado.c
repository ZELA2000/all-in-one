/* 
 * Author: Gabriele Bovina
 */
//risoluzione di una equazione di primo grado
#include<stdio.h>
float a, b, ris;
int main(){
	printf ("Inserisci il primo termine noto. \n");
	scanf("%f", &a);
	printf("Inserisci il secondo termine noto. \n");
	scanf("%f", &b);
	if(a==0 && b==0){
		printf("L'equazione e' indeterminata");
	}
	else if(a==0){
		printf("L'equazione e' impossibile");
	}
	else{
		ris=-a+b;
		printf("Il risultato dell'equazione vale %f", ris);
	}
}

/* 
 * Author: Gabriele Bovina
 */
//Confronto tra 2 numeri utilizzando else if;
#include <stdio.h>
float numero1, numero2;
int main(){
	printf("Inserisci il valore del primo numero. \n");
	scanf("%f", &numero1);
	printf("Inserisci il valore del secondo numero. \n");
	scanf("%f", &numero2);
	if(numero1==numero2){
		printf("I due valori sono uguali.");
	}
	else if (numero1<numero2){
		printf("Il valore %f e' minore di %f", numero1, numero2);
	}
	else{
		printf("Il valore %f e' maggiore di %f", numero1, numero2);
	}
}

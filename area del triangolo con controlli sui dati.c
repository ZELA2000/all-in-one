/* 
 * Author: Gabriele Bovina
 */
//Calcolo area triangolo con controllo dati
#include <stdio.h>
float base, altezza, area;
int main(){
	printf("Inserisci il valore della base. \n");
	scanf("%f", &base);
	printf("Inserisci il valore dell' altezza. \n");
	scanf("%f", &altezza);
	area=base*altezza/2;
	printf("L'area vale %f. \n", area);
}

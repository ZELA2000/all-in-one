//media di 5 voti con il comando for()
#include <stdio.h>
int i;
float voto, somma=0, media;
int main(){
	for (i=1; i<6; i++){
		printf("Inserisca il voto. ");
		scanf("%f", &voto);
		somma=somma+voto;
	}
	media=somma/5;
	printf("La media dei voti vale %f", media);
}

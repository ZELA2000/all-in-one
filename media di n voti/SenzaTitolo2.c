//media di n voti con il comando for()
#include <stdio.h>
int i, n;
float voto, somma=0, media;
int main(){
	printf("Con quanti voti deve fare la media? ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Inserisca il voto. ");
		scanf("%f", &voto);
		somma=somma+voto;
	}
	media=somma/n;
	printf("La media dei voti vale %f", media);
}

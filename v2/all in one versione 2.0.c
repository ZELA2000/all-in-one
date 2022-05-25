/*
 * Creatore: Gabriele Bovina
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <process.h>
 //variabili globale
FILE * pf;
//menu
int main() {
// Variabile di confronto
   char scelta=0;
// Stampa del menu
    printf("      Scegli l'opzione\n");
    printf("-----------------------------------------------------------\n");
    printf("-    a. Somma fra due numeri   \n");
    printf("-    b. Calcolo del quoziente fra due numeri    \n");
    printf("-    c. Calcolare la media di 3 numeri    \n");
    printf("-    d. Calcolo area di un rettangolo (non numeri sotto allo 0)\n");
    printf("-    e. Calcolo media fra tre voti scolastici (non numeri sotto all' 1) \n");
	printf("-    f. Stampa di due numeri in ordine crescente \n");
	printf("-    g. Media di 5 voti (ciclo for()) \n");
	printf("-    h. Media di n voti (ciclo for()) \n");
	printf("-    i. Richiesta all'utente di 4 numeri interi e stampa a schermo solo se il numero e' positivo. \n");
	printf("-    j. Confronto tra 2 numeri utilizzando else if; \n");
	printf("-    k. Calcolo area triangolo con controllo dati \n");
	printf("-    l. Risoluzione di una equazione di primo grado con coefficenti noti a e b. \n");
    printf("-    m. Uscire \n");
    printf("-----------------------------------------------------------\n");
    
// Esecuzione del comando
    printf("Effettua una scelta: ");
// Ottengo l'input del carattere
    scelta = getchar();

// Parte lo Switch
    switch(scelta){
        case 'a':
        	system("cls");
            sommafraduenumeri();
            break;
            
        case 'b':
            system("cls");
            calcolodelquozientefraduenumeri();
            break;
            
        case 'c':
            system("cls");	
            calcolarelamediadi3numeri();
            break;
        case 'd':
        	system("cls");
        	calcoloarearettangolover();
        case 'e':
        	system("cls");
        	calcolarelamediadi3numeriver();
        case 'f':
        	system("cls");
        	stampadiduenumeriinordinecrescente();
        case 'g':
        	system("cls");
        	mediadi5voticonilcomandofor();
        case 'h':
        	system("cls");
        	mediadinvoticonilcomandofor();
        case 'i':
        	system("cls");
        	numeriinteriestampasolosenumeropositivo();
        case 'j':
        	system("cls");
        	confrontotra2numeriutilizzandoelseif();
        case 'k':
        	system("cls");
        	calcoloareatriangoloconcontrollodati();
        case 'l':
        	system("cls");
        	calcoloequazione();
		case 'm':
			system("cls");
			printf("Grazie per avermi scelto.");
			exit(EXIT_SUCCESS);
        default:
        	system("cls");
            main();
    }
    return 0;
}
//soma fra due numeri
int sommafraduenumeri(){
	//variabili
	int a=0, b=0, somma=0;
	//programma
	printf("calcolo somma fra due numeri \n");
	printf("Inserisca il primo addendo. ");
	scanf("%d", &a);
	printf("Inserisca il secondo addendo. ");
	scanf("%d", &b);
	somma=a+b;
	printf("La somma dei due addendi ha valore %d.\n", somma);
	printf("Attenda 5 secondi, grazie.");
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//salvataggio procedura effettuata
	fprintf(pf, "somma fra due numeri: \n");
	fprintf(pf, "%d+%d=%d \n", a, b, somma);
	fclose(pf);
	//tornare a menu NON TOCCARE
	sleep(5);
	system("cls");
	main();	
}
//calcolo del quoziente fra due numeri
int calcolodelquozientefraduenumeri(){
	//variabili
	float a=0, b=0, quoziente=0;
	//programma
	printf("calcolo del quoziente fra due numeri \n");
	printf("Inserisca il primo valore. ");
	scanf("%f", &a);
	printf("Inserisca il secondo valore. ");
	scanf("%f", &b);
	quoziente=a/b;
	printf("Il quoziente dei due valori ha valore %f.\n", quoziente);
	printf("Attenda 5 secondi, grazie.");
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//salvataggio procedura effettuata
	fprintf(pf, "calcolo del quoziente fra due numeri: \n");
	fprintf(pf, "%f+%f=%f \n", a, b, quoziente);
	fclose(pf);
	//tornare a menu NON TOCCARE
	sleep(5);
	system("cls");
	main();	
}
//calcolo della mnedia fra 3 numeri
int calcolarelamediadi3numeri(){
	//variabili
	float a=0, b=0, c=0, media=0;
	//programma
	printf("calcolo media fra 3 numeri \n");
	printf("Inserisca il primo valore. ");
	scanf("%f", &a);
	printf("Inserisca il secondo valore. ");
	scanf("%f", &b);
	printf("Inserisca il terzo valore. ");
	scanf("%f", &c);
	media=(a+b+c)/3;
	printf("La media dei tre valori ha valore %f.\n", media);
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//salvataggio procedura effettuata
	fprintf(pf, "calcolo della media fra tre numeri: \n");
	fprintf(pf, "(%f+%f+%f):3=%f \n", a, b, c, media);
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//CALCOLO AREA RETTANGOLO CON VERIFICA
int calcoloarearettangolover(){
	//variabili
	float b=0, h=0, A=0;
	//programma
	printf("Calcolo area rettangolo (non numeri sotto allo 0)\n");
	printf("Inserisca il valore della base. ");
	scanf("%f", &b);
	printf("Inserisca il valore dell'altezza. ");
	scanf("%f", &h);
	if(b>0 && h>0){
			A=b*h;
			printf("Il valore dell'area vale %f \n", A);
	}	
	else{
		printf("I valori che ha inserito non valgono. Riprova! \n");
		
		sleep(3);
		system("cls");
		main();
	}
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//salvataggio procedura effettuata
	fprintf(pf, "calcolo area rettangolo (verificato): \n");
	fprintf(pf,"%f*%f=%f \n", b, h, A);
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//calcolo media tra tre numeri CON VERIFICA
int calcolarelamediadi3numeriver(){
	//variabili
	float a=0, b=0, c=0, media=0;
	//programma
	printf("Calcolo media fra tre nuemri (non numeri sotto a 1) \n");
	printf("Inserisca il primo valore. ");
	scanf("%f", &a);
	printf("Inserisca il secondo valore. ");
	scanf("%f", &b);
	printf("Inserisca il terzo valore. ");
	scanf("%f", &c);
	if(a>=1 && b>=1 && c>=1){
		media=(a+b+c)/3;
		printf("La media dei tre valori ha valore %f.\n", media);
	}
	else{
		printf("I valori che ha inserito non valgono. Riprova! \n");
		
		sleep(3);
		system("cls");
		main();
	}
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//salvataggio procedura effettuata
	fprintf(pf, "calcolo della media fra tre numeri (con verifica): \n");
	fprintf(pf, "(%f+%f+%f):3=%f \n", a, b, c, media);
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//stampa di due numeri in ordine crescente
int stampadiduenumeriinordinecrescente(){
	//variabili
	float a=0, b=0;
	//creazione/apertura file con calcoli receenti
	pf = fopen ("storia procedure recenti.txt", "a+");
	//progreamma
	printf("Stampa di due numeri in ordine crescente: \n");
	printf("Inserisca il primo valore: ");
	scanf("%f", &a);
	printf("Inserisca il secondo valore: ");
	scanf("%f", &b);
	if (a>b){
		printf("il numero minore vale %f e il maggiore vale %f \n", b, a);
		//salvataggio procedura
		fprintf(pf, "Stampa di due numeri in ordine crescente: \n");
		fprintf(pf, "Il numero minore vale %f e il maggiore vale %f \n", b, a);
		fclose(pf);
	}
	else {
		printf("il numero minore vale %f e il maggiore vale %f \n", a, b);
		//salvataggio procedura
		fprintf(pf, "Stampa di due numeri in ordine crescente: \n");
		fprintf(pf, "Il numero minore vale %f e il maggiore vale %f \n", a, b);
		fclose(pf);
	}
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//media di 5 voti con il comando for()
int mediadi5voticonilcomandofor(){
	//variabili
	int i=0;
	float voto=0, somma=0, media=0;
	//creazione/apertura file con calcoli recenti
	pf = fopen("storia procedure recenti.txt", "a+");
	//programma
	printf("Media di 5 voti con il comando for(): \n");
	for (i=1; i<6; i++){
		printf("Inserisca il voto. ");
		scanf("%f", &voto);
		somma=somma+voto;
	}
	media=somma/5;
	printf("La media dei voti vale %f \nt", media);
	//salvataggio procedura
	fprintf(pf, "Media di 5 voti (ciclo for()): \n");
	fprintf(pf, "La media dei voti vale %f \n", media);
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//media di n voti con il comando for()
int mediadinvoticonilcomandofor(){
	//varibili
	int i=0, n=0;
	float voto=0, somma=0, media=0;
	//creazione/apertura file con calcoli recenti
	pf = fopen("storia procedure recenti.txt", "a+");
	//programma
	printf("Media di n voti con il comando for(): \n");
	printf("Con quanti voti deve fare la media? ");
	scanf("%d", &n);
	for (i=0; i<n; i++){
		printf("Inserisca il voto. ");
		scanf("%f", &voto);
		somma=somma+voto;
	}
	media=somma/n;
	printf("La media dei voti vale %f \n", media);
	//salvataggio procedura
	fprintf(pf, "Media di n voti (ciclo for()): \n");
	fprintf(pf, "La media dei voti vale %f \n", media);
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//richiesta all'utente di 4 numeri interi e stampa a schermo solo se il numero è positivo.
int numeriinteriestampasolosenumeropositivo(){
	//variabili
	int i=0;
	float numero=0;
	//creazione/apertura file con il calcoli recenti
	pf = fopen("storia procedure recenti.txt", "a+");
	fprintf(pf, "Richiesta all'utente di 4 numeri interi e stampa a schermo solo se il numero è positivo: \n");
	//programma e salvataggio procedure
	for(i=0; i<4; i++){
		printf("Inserisci il numero. \n");
		scanf("%f", &numero);
		if(numero>0){
			printf("Il valore che hai inserito e' positivo e vale %f. \n", numero);
			fprintf(pf, "Il valore che hai inserito e' positivo e vale %f. \n", numero);
		}
		else{
			printf("Il valore %f e' negativo. \n", numero);
			fprintf(pf, "il valore %f e' negativo. \n", numero);
		}
	}
	fclose(pf);
	//tornare a menu NON TOCCARE
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//Confronto tra 2 numeri utilizzando else if;
int confrontotra2numeriutilizzandoelseif(){
	float numero1, numero2;
	pf = fopen("storia procedure recenti.txt", "a+");
	fprintf(pf, "Confronto tra 2 numeri utilizzanto else if;: \n");
	printf("Inserisci il valore del primo numero. \n");
	scanf("%f", &numero1);
	printf("Inserisci il valore del secondo numero. \n");
	scanf("%f", &numero2);
	if(numero1==numero2){
		printf("I due valori sono uguali. \n");
		fprintf(pf, "I due numeri sono uguali. \n");
	}
	else if (numero1<numero2){
		printf("Il valore %f e' minore di %f \n", numero1, numero2);
		fprintf(pf, "Il valore %f e' minore di %f. \n", numero1, numero2);
	}
	else{
		printf("Il valore %f e' maggiore di %f \n", numero1, numero2);
		fprintf(pf, "Il valore %f e' maggiore di %f. \n", numero1, numero2);
	}
	fclose(pf);
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//Calcolo area triangolo con controllo dati
int calcoloareatriangoloconcontrollodati(){
	float base, altezza, area;
	pf=fopen("storia procedure recenti.txt", "a+");
	fprintf(pf, "Calcolo area triangolo con controllo dati: \n");
	printf("inserisci il valore della base. \n");
	scanf("%f", &base);
	printf("inserisci il valore dell'altezza. \n");
	scanf("%f", &altezza);
	area=base*altezza/2;
	printf("l'area vale %f \n", area);
	fprintf( pf, "%f*%f/2=%f \n", base, altezza, area);
	fclose(pf);
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}
//risoluzione di una equazione di primo grado

int calcoloequazione(){
	float a=0, b=0, ris=0;
	pf=fopen("storia procedure recenti.txt", "a+");
	fprintf(pf, "Risoluzione di una equazione di primo grado con coefficenti noti a e b: \n");
	printf ("Inserisci il primo termine noto. \n");
	scanf("%f", &a);
	printf("Inserisci il secondo termine noto. \n");
	scanf("%f", &b);
	if(a==0 && b==0){
		printf("L'equazione e' indeterminata \n");
		fprintf(pf, "L'equazione e' indeterminata \n");
	}
	else if(a==0){
		printf("L'equazione e' impossibile \n");
		fprintf(pf, "L'equazione e' impossibile \n");
	}
	else{
		ris=-a+b;
		fprintf(pf, "-%f+%f=%f \n", a, b, ris);
		printf("Il risultato dell'equazione vale %f \n", ris);
		fprintf(pf, "Il risultato dell'equazione vale %f \n", ris);
	}
	fclose(pf);
	printf("Attenda 5 secondi, grazie.");
	sleep(5);
	system("cls");
	main();
}

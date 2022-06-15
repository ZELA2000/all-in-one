/*
 * Creatore: Gabriele Bovina
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <process.h>
 #include <math.h>
//variabili globali
FILE * pf;
//menu home
int main(){
	//variabili
	int scelta=0;
	//menu principale
	printf("+---------------------------------------------------------+\n");
	printf("|                  Scegli la categoria                    |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|1 . Programmi senza l'ausilio di comandi particolari     |\n");
	printf("|2 . Programmi con l'ausilio del comando 'if'             |\n");
	printf("|3 . Programmi con l'ausilio del comando 'for'            |\n");
	printf("|4 . Programmi con l'ausilio dei comandi 'break'          |\n");
	printf("|5 . Programmi con l'ausilio del comando 'switch'         |\n");
	printf("|6 . Programmi con l'ausilio del comando 'while'          |\n");
	printf("|7 . Programmi con l'ausilio del comando 'do-while'       |\n");
	printf("|8 . Uscire                                               |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|   E' obbligatorio usare solo il tasterino numerico!!!   |\n");
	printf("+---------------------------------------------------------+ \n \n");
	//richiesta categoria
	printf("Inserisci il numero della categoria da selezionare: ");
	scanf("%d", &scelta);
	//switch
	switch(scelta){
		case 1:
			system("cls");
			menu1();
			break;
		case 2:
			system("cls");
			menu2();
			break;
		case 3:
			system("cls");
			menu3();
			break;
		case 4:
			system("cls");
			menu4();
			break;
		case 5:
			system("cls");
			menu5();
			break;
		case 6:
			system("cls");
			menu6();
			break;
		case 7:
			system("cls");
			menu7();
			break;
		case 8:
			system("cls");
			uscita();
			break;
		default:
			system("cls");
			main();
			break;
	}
}








//MENU PROGRAMMI

//menu principale (1 . Programmi senza l'ausilio di comandi particolari)
menu1(){
	int scelta=0;
	printf("+---------------------------------------------------------+\n");
	printf("|    Programmi senza l'ausilio di comandi particolari     |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|                  Scegli il programma                    |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|1 . Somma fra due numeri                                 |\n");
	printf("|2 . Calcolo del quoziente far due numeri                 |\n");
	printf("|3 . Calcolo della media fra 3 numeri                     |\n");
	printf("|4 . Calcolo area di un triangolo                         |\n");
	printf("|5 . Home                                                 |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|   E' obbligatorio usare solo il tasterino numerico!!!   |\n");
	printf("+---------------------------------------------------------+ \n \n");
	printf("Digita il numero del programma che vuoi inserire: ");
	scanf("%d", &scelta);
	switch(scelta){
		case 1:
			system("cls");
			a1();
			break;
		case 2:
			system("cls");
			a2();
			break;
		case 3:
			system("cls");
			a3();
			break;
		case 4:
			system("cls");
			a4();
			break;
		case 5:
			system("cls");
			main();
			break;
		default:
			system("cls");
			menu1();
			break;
	}
}

//menu principale (2 . Programmi con l'ausilio del comando 'if')
menu2(){
	int scelta=0;
	printf("+---------------------------------------------------------+\n");
	printf("|       Programmi con l'ausilio del comando 'if'          |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|                  Scegli il programma                    |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|1 . Calcolo area di un rettangolo                        |\n");
	printf("|2 . Calcolo media tra 3 numeri (numeri sopra a 1)        |\n");
	printf("|3 . Stampa di due numeri in ordine crescente             |\n");
	printf("|4 . Confronto tra due numeri                             |\n");
	printf("|5 . Risoluzione di una equazione di primo grado          |\n");
	printf("|6 . Pari o dispari                                       |\n");
	printf("|7 . Risoluzione di una equazione di secondo grado        |\n");
	printf("|8 . Home                                                 |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|   E' obbligatorio usare solo il tasterino numerico!!!   |\n");
	printf("+---------------------------------------------------------+ \n \n");
	printf("Digita il numero del programma che vuoi inserire: ");
	scanf("%d", &scelta);
	switch(scelta){
		case 1:
			system("cls");
			b1();
			break;
		case 2:
			system("cls");
			b2();
			break;
		case 3:
			system("cls");
			b3();
			break;
		case 4:
			system("cls");
			b4();
			break;
		case 5:
			system("cls");
			b5();
			break;
		case 6:
			system("cls");
			b6();
			break;
		case 7:
			system("cls");
			b7();
			break;
		case 8:
			system("cls");
			main();
			break;
		default:
			system("cls");
			menu2();
			break;
	}
}

//menu principale (3 . Programmi con l'ausilio del comando 'for')
menu3(){
	int scelta=0;
	printf("+---------------------------------------------------------+\n");
	printf("|      Programmi con l'ausilio del comando 'for'          |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|                  Scegli il programma                    |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|1 . 4 numeri e scrittura solo di coloro che sono positivi|\n");
	printf("|2 . Media di n voti                                      |\n");
	printf("|3 . Media di 5 voti                                      |\n");
	printf("|4 . Home                                                 |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|   E' obbligatorio usare solo il tasterino numerico!!!   |\n");
	printf("+---------------------------------------------------------+ \n \n");
	printf("Digita il numero del programma che vuoi inserire: ");
	scanf("%d", &scelta);
	switch(scelta){
		case 1:
			system("cls");
			c1();
			break;
		case 2:
			system("cls");
			c2();
			break;
		case 3:
			system("cls");
			c3();
			break;
		case 4:
			system("cls");
			main();
			break;
		default:
			system("cls");
			menu3();
			break;
	}
}

//menu principale (4 . Programmi con l'ausilio dei comandi 'break')
menu4(){
	printf("+---------------------------------------------------------+\n");
	printf("|      Al momento non ci sono programmi con 'break' :(    |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("REINDIRIZZAMENTO AL MENU 'HOME'");
	sleep(5);
	system("cls");
	main();
}

//menu principale (5 . Programmi con l'ausilio del comando 'switch')
menu5(){
	int scelta=0;
	printf("+---------------------------------------------------------+\n");
	printf("|     Programmi con l'ausilio del comando 'switch'        |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|                  Scegli il programma                    |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|1 . Pari o dispari                                       |\n");
	printf("|2 . Home                                                 |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|   E' obbligatorio usare solo il tasterino numerico!!!   |\n");
	printf("+---------------------------------------------------------+ \n \n");
	printf("Digita il numero del programma che vuoi inserire: ");
	scanf("%d", &scelta);
	switch(scelta){
		case 1:
			system("cls");
			e1();
			break;
		case 2:
			system("cls");
			main();
			break;
		default:
			system("cls");
			menu5();
			break;
	}
}

//menu principale (6 . Programmi con l'ausilio del comando 'while')
menu6(){
	printf("+---------------------------------------------------------+\n");
	printf("|      Al momento non ci sono programmi con 'while' :(    |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("REINDIRIZZAMENTO AL MENU 'HOME'");
	sleep(5);
	system("cls");
	main();
}

//menu principale (7 . Programmi con l'ausilio del comando 'do-while' )
menu7(){
	printf("+---------------------------------------------------------+\n");
	printf("|    Al momento non ci sono programmi con 'do-while' :(   |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("REINDIRIZZAMENTO AL MENU 'HOME'");
	sleep(5);
	system("cls");
	main();
}








//PROGRAMMI
// A(1)
//somma fra due numeri
int a1(){
	//programma base
	float a=0, b=0, c=0;
	int s1=0, s2=0;
	printf("+---------------------------------------------------------+\n");
	printf("|                   Somma fra due numeri                  |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	c=a+b;
	printf("La somma fra %f e %f vale %f\n\n", a, b, c);
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|                   Somma fra due numeri                  |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		fprintf(pf, "La somma fra %f e %f vale %f\n", a, b, c);
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//calcolo del quoziente fra due numeri
int a2(){
	//programma base
	float a=0, b=0, c=0;
	int s1=0, s2=0;
	printf("+---------------------------------------------------------+\n");
	printf("|           Calcolo del quoziente fra due numeri          |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	c=a/b;
	printf("La divisione %f/%f da valore %f\n\n", a, b, c);
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|           Calcolo del quoziente fra due numeri          |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		fprintf(pf, "La divisione %f/%f da valore %f\n\n", a, b, c);
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//calcolo della media fra 3 numeri
int a3(){
	//programma base
	float a=0, b=0, c=0, media=0;
	int s1=0, s2=0;
	printf("+---------------------------------------------------------+\n");
	printf("|             Calcolo della media fra 3 numeri            |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	printf("Inserisci il terzo valore: ");
	scanf("%f", &c);
	media=(a+b+c)/3;
	printf("La media fra %f, %f e %f vale %f\n\n", a, b, c, media);
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|             Calcolo della media fra 3 numeri            |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		fprintf(pf, "Inserisci il terzo valore: %f\n", c);
		fprintf(pf, "La media fra %f, %f e %f vale %f\n\n", a, b, c, media);
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//calcolo area di un triangolo
int a4(){
	//programma base
	float a=0, b=0, area=0;
	int s1=0, s2=0;
	printf("+---------------------------------------------------------+\n");
	printf("|               Calcolo area di un triangolo              |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il valore della base: ");
	scanf("%f", &b);
	printf("Inserisci il valore dell'altezza: ");
	scanf("%f", &a);
	area=(b*a)/2;
	printf("L'area del triangolo con base %f e altezza %f vale %f\n\n", b, a, area);
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|               Calcolo area di un triangolo              |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il valore della base: %f\n", b);
		fprintf(pf, "Inserisci il valore dell'altezza: %f\n", a);
		fprintf(pf, "L'area del triangolo con base %f e altezza %f vale %f\n\n", b, a, area);
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}

//B(2)
//Calcolo area di un rettangolo
int b1(){
	//programma base
	float b=0, h=0, area=0;
	int s1=0, s2=0, caso=0;
	printf("+---------------------------------------------------------+\n");
	printf("|               Calcolo area di un rettangolo             |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|  Per questo programma e' richiesto di non usare numeri  |\n");
	printf("|                      sotto allo 0                       |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il valore della base: ");
	scanf("%f", &b);
	printf("Inserisci il valore dell'altezza: ");
	scanf("%f", &h);
	if(b>0 && h>0){
		area=b*h;
		printf("L'area del rettangolo con la base %f e l'altezza %f vale %f\n\n", b, h, area);		
	}
	else{
		printf("I valori inseriti sono sotto a 0. :(\n\n");
		caso=1;
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|               Calcolo area di un triangolo              |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il valore della base: %f\n", b);
		fprintf(pf, "Inserisci il valore dell'altezza: %f\n", h);
		if(caso==1){
			fprintf(pf, "I valori inseriti sono sotto a 0. :(\n");
		}
		else{
			fprintf(pf, "L'area del rettangolo con la base %f e l'altezza %f vale %f\n\n", b, h, area);
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//Calcolo media tra 3 numeri (numeri sopra a 1)
int b2(){
	//programma base
	float a=0, b=0, c=0, media=0;
	int s1=0, s2=0, caso=0;
	printf("+---------------------------------------------------------+\n");
	printf("|                Calcolo media tra 3 numeri               |\n");
	printf("+---------------------------------------------------------+\n");
	printf("|  Per questo programma e' richiesto di non usare numeri  |\n");
	printf("|                      sotto all'1                        |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	printf("Inserisci il terzo valore: ");
	scanf("%f", &c);
	if(a>0 && b>0 && c>1){
		media=(a+b+c)/3;
		printf("La media fra %f, %f e %f vale %f. \n\n", a, b, c, media);		
	}
	else{
		printf("I valori inseriti sono sotto a 1. :(\n\n");
		caso=1;
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|                Calcolo media tra 3 numeri               |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		fprintf(pf, "Inserisci il terzo valore: %f\n", c);
		if(caso==1){
			fprintf(pf, "I valori inseriti sono sotto a 0. :(\n");
		}
		else{
			fprintf(pf, "La media fra %f, %f e %f vale %f. \n\n", a, b, c, media);
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//Stampa di due numeri in ordine crescente
int b3(){
	//programma base
	float a=0, b=0;
	int s1=0, s2=0;
	printf("+---------------------------------------------------------+\n");
	printf("|         Stampa di due numeri in ordine crescente        |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	if(a>b){
		printf("Il numero minore vale %f e il maggiore vale %f \n", b, a);		
	}
	else{
		printf("Il numero minore vale %f e il maggiore vale %f \n", a, b);
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|         Stampa di due numeri in ordine crescente        |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		if(a>b){
			fprintf(pf, "Il numero minore vale %f e il maggiore vale %f \n", b, a);
		}
		else{
			fprintf(pf, "Il numero minore vale %f e il maggiore vale %f \n", a, b);
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//Confronto tra due numeri
int b4(){
	//programma base
	float a=0, b=0;
	int s1=0, s2=0, caso=0;
	printf("+---------------------------------------------------------+\n");
	printf("|                 Confronto tra due numeri                |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo valore: ");
	scanf("%f", &a);
	printf("Inserisci il secondo valore: ");
	scanf("%f", &b);
	if(a==b){
		printf("I due valori sono identici. \n\n");
		caso=0;		
	}
	else if(a<b){
		printf("Il valore %f e' minore di %f.\n\n", a, b);
		caso=1;
	}
	else{
		printf("Il valore %f e' maggiore di %f.\n\n", a, b);
		caso=2;
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|                 Confronto fra due numeri                |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		if(caso==0){
			fprintf(pf, "I due valori sono identici.\n\n");
		}
		else if(caso==1){
			fprintf(pf, "Il valore %f e' minore di %f. \n\n", a, b);
		}
		else if(caso==2){
			fprintf(pf, "Il valore %f e' maggiore di %f. \n\n", a, b);
		}
		else{
			printf("Impossibile trascrivere il risultato sul file. :(\n\n");
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//Risoluzione di una equazione di primo grado
int b5(){
	//programma base
	float a=0, b=0, ris=0;
	int s1=0, s2=0, caso=0;
	printf("+---------------------------------------------------------+\n");
	printf("|       Risoluzione di una equazione di primo grado       |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il primo termine noto: ");
	scanf("%f", &a);
	printf("Inserisci il secondo termine noto: ");
	scanf("%f", &b);
	if(a==0 && b==0){
		printf("L'equazione e' indeterminata. \n\n");
		caso=0;		
	}
	else if(a==0){
		printf("L'equazione e' impossibile.\n\n");
		caso=1;
	}
	else{
		ris=-a+b;
		printf("Il risultato dell'equazione vale %f.\n\n", ris);
		caso=2;
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|       Risoluzione di una equazione di primo grado       |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il primo valore: %f\n", a);
		fprintf(pf, "Inserisci il secondo valore: %f\n", b);
		if(caso==0){
			fprintf(pf, "L'equazione e' indeterminata.\n\n");
		}
		else if(caso==1){
			fprintf(pf, "L'equazione e' impossibile. \n\n");
		}
		else if(caso==2){
			fprintf(pf, "Il risultato dell'equazione vale %f. \n\n", ris);
		}
		else{
			printf("Impossibile trascrivere il risultato sul file. :(\n\n");
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//pari o dispari
int b6(){
	//programma base
	int s1=0, s2=0, caso=0, a=0, x=0;
	printf("+---------------------------------------------------------+\n");
	printf("|                      Pari o dispari                     |\n");
	printf("+---------------------------------------------------------+\n\n");
	printf("Inserisci il numero: ");
	scanf("%d", &a);
	x=a%2;
	if(x==0){
		printf("Il numero e' pari. \n\n");
		caso=1;		
	}
	else{
		printf("Il numero e' dispari.\n\n");
		caso=0;
	}
	//salvataggio
	printf("***********************************************************\n\n");
	printf("Vuoi salvare questa procedura?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s1);
	if(s1==1){
		pf = fopen ("storia procedure recenti.txt", "a+");
		fprintf(pf, "+---------------------------------------------------------+\n");
		fprintf(pf, "|                      Pari o dispari                     |\n");
		fprintf(pf, "+---------------------------------------------------------+\n\n");
		fprintf(pf, "Inserisci il numero: %d\n", a);
		if(caso==1){
			fprintf(pf, "Il numero e' pari.\n\n");
		}
		else{
			fprintf(pf, "Il numero e' dispari.\n\n");
		}
		printf("Salvataggio completato.\n");
		fclose(pf);
	}
	else {
		printf("Salvataggio non eseguito.\n\n");
	}
	//tornare a home
	printf("***********************************************************\n\n");
	printf("Vuoi tornare al menu home?\n");
	printf("1-si  2-no\n");
	printf("scelta: ");
	scanf("%d", &s2);
	if(s2==1){
		system("cls");
		main();
	}
	else{
		system("cls");
		uscita();
	}
}
//risoluzione di una equazione di secondo grado
int b7(){
}


//C(3)
//4 nuemri e scrittura solo di coloro che sono positivi
c1(){
}
//media di n voti
c2(){
}
//media di 5 voti
c3(){
}

//D(4)

//E(5)
//pari o dispari
e1(){
}

//F(6)

//G(7)



//exit
uscita(){
	printf("Grazie per averci scelto.");
	exit(EXIT_SUCCESS);
}

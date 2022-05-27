/*
 * Creatore: Gabriele Bovina
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <process.h>
//variabili
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
	printf("|3 . Programmi con l'ausilio del comando 'else if'        |\n");
	printf("|4 . Programmi con l'ausilio del comando 'for'            |\n");
	printf("|5 . Programmi con l'ausilio dei comandi 'break'          |\n");
	printf("|6 . Programmi con l'ausilio del comando 'switch'         |\n");
	printf("|7 . Programmi con l'ausilio del comando 'while'          |\n");
	printf("|8 . Programmi con l'ausilio del comando 'do-while'       |\n");
	printf("|9 . Uscire                                               |\n");
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
			menu8();
			break;
		case 9:
			system("cls");
			printf("Grazie per averci scelto.");
			exit(EXIT_SUCCESS);
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
}
//menu principale (3 . Programmi con l'ausilio del comando 'else if')
menu3(){
}
//menu principale (4 . Programmi con l'ausilio del comando 'for')
menu4(){
}
//menu principale (5 . Programmi con l'ausilio dei comandi 'break')
menu5(){
}
//menu principale (6 . Programmi con l'ausilio del comando 'switch')
menu6(){
}
}
//menu principale (7 . Programmi con l'ausilio del comando 'while')
menu7(){
}
//menu principale (8 . Programmi con l'ausilio del comando 'do-while' )
menu8(){
}








//PROGRAMMI
// A
//somma fra due numeri
int a1(){
}
//calcolo del quoziente fra due numeri
int a2(){
}
//calcolo della media fra 3 numeri
int a3(){
}
//calcolo area di un triangolo
int a4(){
}

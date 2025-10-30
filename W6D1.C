#include <stdio.h>
#include <ctype.h>

void introduzione (){

   printf("Benvenuto al nostro gioco di domande!\nRispondi correttamente per vincere.\n\n");
}
char menu(){
   char selezione;

   printf("\nScegli una delle due opzioni: \n\n");   
   printf(" A.  Inizia Nuova Partita\n");
   printf(" B.  Esci dalla Partita\n");
   printf("\nSelezione: ");

   scanf(" %c", &selezione);
   return selezione;
}

   int gioco(){

      char nome[30];
      int punti = 0 ;

      // Introduzione gioco
      printf("\nInserisci il tuo nome: ");
      scanf(" %s", &nome);    //singolo carattere: %c, stringa: %s
      printf("\nBenvenuto %s, iniziamo a giocare!\n", nome);
      
      // Prima domanda

      char risposta;
      printf("\n1| Che caratteristica ha un alimento idrolizzato?\n");
      printf("  A) Trattiene molta acqua al suo interno\n  B) Le sue proteine sono digerite artificialmente\n  C) Sono altamente sazianti\n");
      printf("\nRisposta: ");

      scanf(" %c", &risposta);

      if (toupper(risposta)== 'B'){
         printf("\nRisposta Esatta!\n");
         punti++;

      } else {
         printf("\nRisposta Errata!\n");
      }
      // Seconda domanda
      
      printf("\n2| Chi è il padrone del Castello dell'Infinito?\n");
      printf("  A) Zen'itsu\n  B) Kamaboko Gonpachiro\n  C) Michael Jackson\n");
      printf("\nRisposta: ");
      scanf(" %c", &risposta);

      if (toupper(risposta)== 'C'){
         printf("\nRisposta Esatta!\n");
         punti++;

      } else {
         printf("\nRisposta Errata!\n");
      }
      // Terza domanda
      
      printf("\n3| Quali di queste alzate non fa parte delle alzate ufficiali del Powerlifting?\n");
      printf("  A) Squat\n  B) Military Press\n  C) Bench Press\n");
      printf("\nRisposta: ");
      scanf(" %c", &risposta);

      if (toupper(risposta)== 'B'){
         printf("\nRisposta Esatta!\n");
         punti++;

      } else {
         printf("\nRisposta Errata!\n");
      }


      return punti;
   }

 int main (){
   char selezione;
   int punti = 0;

   introduzione();
   

   do{
      selezione=menu();

      switch (toupper(selezione)) {
         case 'A':{
            int puntitotali = gioco();
            punti += puntitotali;
            printf("Totale in questo momento: %d\n", punti);
            break;
         }
         case 'B':
            printf("Grazie, e arrivederci!\n");
            break;
         default: 
            printf("Scelta non valida!\n");
            break;
         }

   } while (toupper(selezione) != 'B'); //fare quella routine se non sceglie i miei valori

   printf("\nPunteggio complessivo: %d\n", punti);
   return 0;
}
#include <stdio.h>
#include "char_array.h"
#include "game.h"


int main() {
  char a[3][3] ={{'o','o','o'},
   {'o','o','o'}
  ,{'o','o','o'}};

  
  printf("EXERCICE 1\n");
  display_grid(a);
  int e='_';


  
  printf("EXERCICE 2\n");
  init_grid(a, e);
  display_grid(a);

  

  printf("EXERCICE 3\n");

update_grid(a,'x',0,0);
update_grid(a,'x',0,0);
update_grid(a,'x',0,0);
  
update_grid(a,'O',0,0);
update_grid(a,'O',0,0);
update_grid(a,'O',0,0);
   display_grid(a);

  
 int  pion = test_win(a,'x');
  printf("%d\n",pion);
  
  

 int joueur1;
 int joueur2;
  int v;
  int b;
int choixMenu;
  printf("===Bienvenue dans le jeu du Morpion===\n\n");
  printf("Veuillez selectionner  mode !\n\n");
  printf("1 : Joueur VS Joueur\n");
  printf("2 : Regles du Morpion\n");
scanf("%d", &choixMenu);
  switch(choixMenu)
    {
      case 1:
      while(1)
      {
        scanf(" %d %d", &v, &b);
        update_grid(a,'O',v,b);
        display_grid(a);
        if(test_win(a,'O')==1){
          return 0;
        }
        
        
         scanf(" %d %d", &v, &b);
        update_grid(a,'X',v,b);
        display_grid(a);
         if(test_win(a,'X')==1){
          return 0;
        }
        
      }
   break;

      case 2:
       printf("La regle est simple, vous devez reussir a aligner 3 croix ou ronds?\n");
        printf("Le premier joueur a aligner une suite de 3 symbles win\n");
      default:
  printf("Erreur Mauvais Choix c'est 1 ou 2 !!");
  break;
    }
  
}
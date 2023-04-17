#include <stdio.h>
#include <stdlib.h>
#include "char_array.h"


void display_grid(char (*grid)[3]){
   printf("╔━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╗\n");
  for (int i=0; i<3;i++){ 
    printf("║");
   for(int j=0;j<3;j++){
      printf("    %c    ║",grid[i][j]);
    }printf("\n");
    printf("║━━━━━━━━━║━━━━━━━━━║━━━━━━━━━║\n");   
  }  
}
void init_grid(char (*grid)[3], char c){

  for (int i=0; i<3;i++){ 

   for(int j=0;j<3;j++){
     grid[i][j]=c;

    }
 
  }  
}


void update_grid(char (*grid)[3], char c, int x, int y){
 grid[x][y]=c; 

}





#include <stdio.h>
#include "char_array.h"
#include "game.h"

int test_win(char(*grid)[3],char c){
      
        if(grid[0][0]==c && grid[0][0]==grid[0][1] && grid[0][0]==grid[0][2])
          return 1;

      else if(grid[0][0]==c && grid[0][0]==grid[1][0] && grid[0][0]==grid[2][0])
          return 1;

      else if(grid[0][0]==c && grid[0][0]==grid[1][1] && grid[0][0]==grid[2][2])
          return 1;

      else if(grid[0][2]==c && grid[0][2]==grid[1][1] && grid[0][2]==grid[2][0])
          return 1;

      else return 0;
}
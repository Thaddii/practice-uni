#include <stdio.h>
typedef int Weihdoku[9][9];

//Prints a weihdoku
void printWeihdoku(Weihdoku Weihdoku){
  for (int row = 0;row<9;row++){
    if (row %3 == 0) printf("-------------\n");
    for (int column = 0;column<9;column++){
      if(column%3 == 0) printf("|");
      int value = Weihdoku[row][column];
      if (value != 0) printf("%d", value);
      else printf(".");
    }
    printf("|");
    printf("\n");
  }
  printf("-------------\n");
}

//Calculates all valid values for place given by its row and column in the weihdoku.
//Pass an int-array with 10 places.
//Afterwards you can look at index i to check if value i is valid for the place.
//Valid if values[i]==1, invalid otherwise.
//Valid indicies are the numbers 1,2,...,9.

void validNumbers(Weihdoku weihdoku, int values[10],int row, int column){
  //All numbers are possible
  for(int i = 0;i<10;i++) values[i] = 1;
  //Scan row
  for(int c = 0;c<9;c++){
    if(c == column) continue;
    int value = weihdoku[row][c];
    values[value] = 0;
  }
  // Scan column
  for(int r = 0;r<9;r++){
    if(r == row) continue;
    int value = weihdoku[r][column];
    values[value] = 0;
  }
  // Scan Cage
  int cageRowStart = (row/3)*3;
  int cageColumnStart = (column/3)*3;
  for(int cageRow = cageRowStart; cageRow < cageRowStart+3;cageRow++){
    for(int cageColumn = cageColumnStart; cageColumn < cageColumnStart+3;cageColumn++){
      if (cageRow == row && cageColumn == column) continue;
      int value = weihdoku[cageRow][cageColumn];
      values[value] = 0;
    }
  }
}

// Try to fill in a valid number in row and column of the weihdoku
// Returns 1 if solution is successfull; 0 otherwise
int solve(Weihdoku weihdoku, int startRow, int startColumn){
  //TODO: Your code here
  return 0;
}

int main() {
  // Note: 0 indicate an empty field 
  int weihdoku[9][9] = {{0, 0, 3, 0, 2, 0, 6, 0, 0}, {9, 0, 0, 3, 0, 5, 0, 0, 1},
                      {0, 0, 1, 8, 0, 6, 4, 0, 0}, {0, 0, 8, 1, 0, 2, 9, 0, 0},
                      {7, 0, 0, 0, 0, 0, 0, 0, 8}, {0, 0, 6, 7, 0, 8, 2, 0, 0},
                      {0, 0, 2, 6, 0, 9, 5, 0, 0}, {8, 0, 0, 2, 0, 3, 0, 0, 9},
                      {0, 0, 5, 0, 1, 0, 3, 0, 0}};

  printf("Unsolved:\n");
  printWeihdoku(weihdoku);
  printf("==========================\n");
  solve(weihdoku,0,0);
  printf("Solved:\n");
  printWeihdoku(weihdoku);
  printf("==========================\n");
}

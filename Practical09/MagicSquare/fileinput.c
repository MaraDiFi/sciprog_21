#include<stdio.h>
#include<stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

//Creation of a function that would give us the number of lines present within the file

 int getlines(char filename[MAX_FILE_NAME]);
  int main() {

  //Add lines from FILE_NAME

  FILE *f;
     char filename[MAX_FILE_NAME];
      printf("Enter file name: ");
       scanf("%s", filename);

  //Open the file
     f = fopen(filename, "r");
      int n = getlines(filename);


  //Allocate a matrix
      int i;
      int ** magicSquare = malloc(n * sizeof(int*));

        for(i=0; i<n; i++) {
	   magicSquare[i] = malloc(n * sizeof(int));
	  }

      int j;

        for(i=0; i<n; i++) {
	   printf("Enter the elements in row #%d, separated by blanks and/or linepreaks:\n", i+1);
	for(j=0; j<n; j++) {
	   fscanf(f, "%d", &magicSquare[i][j]);
	}
       }

      printf("The square %s magic.\n", isMagicSquare(magicSquare, n)? "is" : "is NOT");
      for(i=0; i<n; i++) {
        free(magicSquare[i]);
      }
        free(magicSquare);
//The function that was opened now needs to be closed
	  fclose(f);
	return 0;
   }

//Function definition
     int getlines(char filename[MAX_FILE_NAME]) {
//Pointers needed to point to the file location
      FILE *fp;
         fp = fopen(filename,"r"); //"r" means "real"
//Declaration of an integer that will read each character or space within the file
     int ch_read;
     int count = 0;
// With this loop, if the function reads a new line, increase the count of 1
     while( (ch_read = fgetc(fp)) != EOF) {
        if(ch_read == '\n') {
          count++;
        }
     }
// Print, close the file and return
  printf("No. of lines %d\n", count);
       fclose(fp);
     return count;
   }


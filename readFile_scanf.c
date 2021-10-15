#include<stdio.h>
#include<stdlib.h>

#define MAX_LINE_SIZE 256

int main(){

  FILE *f;
  char tmpLine[MAX_LINE_SIZE], filename[25];


  //Check if filename has been specified in command
    printf("\nEnter file name to read: ");
    scanf("%s", filename);

  //Open file
  f = fopen(filename, "r");
    
  if(f == NULL){
      printf("Error Opening Input File\n");
      return 1;
    }

    printf("\nThe file contains: \n");
    while (fgets(tmpLine, MAX_LINE_SIZE, f)){
       printf("%s", tmpLine);
    }
    printf("\n");
    // close the file
    fclose(f);

}

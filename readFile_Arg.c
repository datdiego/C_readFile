#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LINE_SIZE 256

int main(int argc, char* argv[]){

  // Variables initialized for the program to run.
  FILE *f;
  char tmpLine[MAX_LINE_SIZE];


  //Check if filename has been specified in command
   if(argc < 2){
     printf("Usage: %s input.txt \n", argv[0]);
      return 1;
   }
   
   //Opens file and saves it to f
   f = fopen(argv[1], "r");
  
  //Returns Error if problems opening file.
   if(f == NULL)
   {
      printf("Error Opening Input File\n");
      return 1;
   }
  
    //Prints each line of the file.
    while (fgets(tmpLine, MAX_LINE_SIZE, f))
       printf("%s", tmpLine);

    // close the file
    fclose(f);

}

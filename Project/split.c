/**********************
* This program splits a .txt file at a keyword
* and write a new file then searches again until the word is not found
*/



#include <stdio.h> 
#include <string.h>

  int main() {
  FILE * ptr_readfile;
  FILE * ptr_writefile;
  char line[128];      // maximum line size
  char fileoutputname[15];
  int filecounter = 0;
 

  ptr_readfile = fopen("pres", "r");
  if (!ptr_readfile)
   return 1;

  sprintf(fileoutputname, "Gen_Chapter%d", filecounter);
  ptr_writefile = fopen(fileoutputname, "w");

  while (fgets(line, sizeof line, ptr_readfile) != NULL) {
   //printf("im in the file: %s",line);               // What I used to debug
   //printf("VALUE %d:  " , strcmp(line, "Turn\n"));  // What I used to debug 
     if(strcmp(line, "Genesis\n") ==0 ) {
    fclose(ptr_writefile);
    filecounter++;
    sprintf(fileoutputname, "Gen_Chapter%d", filecounter);
    ptr_writefile = fopen(fileoutputname, "w");
    
    if (!ptr_writefile)
     return 1;
   }
   fprintf(ptr_writefile, "%s", line);
  }
  fclose(ptr_readfile);
  return 0;
 }

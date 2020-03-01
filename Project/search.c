#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdio.h> 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// finds the word in the sentence
int isfound(char *sentence, char *word) {

     char *senWords;
     int length = strlen(word);
     int eachLength = 0;
     senWords = strtok(sentence, " ");
     int i = 0;

     while(senWords != NULL)  {
          eachLength = strlen(senWords);
          if(strcmp(senWords, word) == 0)
              return 1;
          senWords = strtok(NULL, " ");

     }

     return 0;

}

// checks for the word in the file and return the
// sentences containing it.

char **wc(char *file_path, char *word, int *clines) {

     FILE *fp;
     int count = 1, len;
     if(NULL == (fp = fopen(file_path, "r")))
          return NULL;

     len = strlen(word);
     int i = 0;
     int size = 150;
     char sentence[size];
     char line[size];
     char **lines = (char **)malloc(sizeof(char *) * 100);

     while(fgets(sentence, size, fp) != NULL) {
          strcpy(line, sentence);

          if(isfound(line, word)) {

              lines[i] = (char *)malloc(sizeof(char *) * 150);
              strcpy(lines[i], sentence);
              i++;
          }
     }

     *clines = i;
     fclose(fp);
     return lines;
}

int main() {

     char key[] = "waters";    // the string I am searching for
     int wordcount = 0;
     int clines = 0;
     char **sentences;
     sentences = wc("test1.txt", key, &clines); // the file i am searching in
     int i = 0;

     printf("Number of lines containing %s is: %d\n", key, clines);
     printf("\nThe lines are: \n");

     for(i = 0; i < clines; i++)  {
          printf("%s", sentences[i]);
     };

     return 0;
}

#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <stdio.h>

char ** parse_args(char *line){
  char * curr= line;
  char * token;
  char ** toreturn;
  int i=0;
  while (curr && i<1){
  token = strsep(&curr," ");
  printf("%s",token);
  //char *(*toreturn +i) = curr;
  i++;
}
printf("\n");
return toreturn;
}
int main(int argc, char *argv[]){
//FILE r;
//fgets(argv, 100, r);
parse_args("Hello my name is Angelique");
  return 0;
}

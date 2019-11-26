#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <stdio.h>

char ** parse_args(char *line){
  char * curr= line;
  char * token;
  char ** toreturn;
  int i=0;
  while (curr){
  token = strsep(&curr," ");
  char *(*toreturn +i) = curr;
  i++;
}
return toreturn;
}
int main(int argc, char *argv[]){
FILE r;
fgets(argv, 100, r);
parse_args(argv);
  return 0;
}

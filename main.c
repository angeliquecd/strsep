#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <stdio.h>
#include<errno.h>
char ** parse_args(char *line){
  char * curr=line;
  char * token;
  char ** toreturn = malloc(7 *sizeof(char*));
  int i=0;
  while (curr){
  *(toreturn+i) = curr;
  token = strsep(&curr," ");
  //printf("This: %s ",toreturn[i]);
   i++;
}
*(toreturn +i) = NULL;
//printf("%s",toreturn[0]);
printf("\n");
return toreturn;
}
int main(int argc, char *argv[]){
//FILE r;
//fgets(argv, 100, r);
char first[100] ="ls -a -l";
char ** args=parse_args(first);
//printf("%s\n",args[0]);
//printf("%s\n",args[1]);
int i=0;
/*while (i<4){
  printf("This is an argument: %s\n",args[i]);
  i++;
}
char * cmd[3];
cmd[0]="ls";
cmd[1]="-a";
cmd[2]="-l";

i=execvp("ls",cmd);
if (i<0) printf("error with ls %d\n",errno); */

execvp(args[0],args);
if (i<0) printf("error with ls %d\n",errno);

  return 0;
}

#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <stdio.h>
#include<errno.h>
char ** parse_args(char *line){
  char * curr=line;
  char * token;
  char ** toreturn = malloc(6 * sizeof(char*));
  int i=0;
  while (curr){
    token = strsep(&curr," ");
toreturn[i] = token;
  //printf("This: %s ",toreturn[i]);
   i++;
}
toreturn[i-1] = strsep(&(toreturn[i-1]), "\n"); //removes last escape
toreturn[i] = NULL;
//printf("%s",toreturn[0]);
//printf("\n");
return toreturn;
}

int main(int argc, char *argv[]){
char r[50];
fgets(r, 50, stdin);
char first[100] ="ls -a -l";
//printf("Input: %s %s\n",argv[1],argv[2]);
char ** args=parse_args(r);
//printf("%s\n",args[0]);
//printf("%s\n",args[1]);
printf("Running command.\n");
int i=0;
/*while (i<6){
  printf("This is an argument: %s\n",args[i]);
  i++;
}
char * cmd[4];
cmd[0]="ls";
cmd[1]="-a";
cmd[2]="-l";
cmd[3]=NULL;
*/
//i=execvp("ls",cmd);
//if (i<0) printf("error with ls %d\n",errno);
execvp(args[0],args);
if (i<0) printf("error with ls %d\n",errno);
free(args);

  return 0;
}

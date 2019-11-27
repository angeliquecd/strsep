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
char *r;
fgets(r, 50, stdin);
char first[100] ="which ls";
printf("Input: %s",r);
char ** args=parse_args(r);
//printf("%s\n",args[0]);
//printf("%s\n",args[1]);
int i=0;
while (i<6){
  printf("This is an argument: %s\n",args[i]);
  i++;
}
/*char * cmd[4];
cmd[0]="ls";
cmd[1]="-a";
cmd[2]="-l";
cmd[3]=NULL;*/

//i=execvp("ls",cmd);
//if (i<0) printf("error with ls %d\n",errno);
i=execvp(args[0],args);
if (i<0) printf("error with ls %d\n",errno);
free(args);

  return 0;
}

#include "kernal/types.h"
#include "kernal/stat.h"
#include "include/user.h"

int main(int argcount,char*argvector[]){
if(argcount<2){
   fprintf(2,"Error:");
   exit(1);
}
int time wait=atoi(argvector[1]);
sleep (time wait);
exit (0);


}

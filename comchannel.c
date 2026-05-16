#include "kernal/types.h"
#include "user/user.h"

int main(){
  int fds[2];
  char buf[100];
  int n;
  int pid;
  pid=fork();

if (pid==0){
n= read(fds[1],buf,sizeof(buf));
write(1,buf,n);
 printf("child");
close(fds[0]);
} else{
write(fd[1],"hii",2);
close(fd[1]);
}
exit(0);
}


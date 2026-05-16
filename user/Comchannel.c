#include "user/user.h"
#include "kernel/types.h"

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
  write(fds[1],"hii",2);
  close(fds[1]);
}
exit(0);
}

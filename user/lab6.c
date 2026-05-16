#include "kernel/types.h"
#include "user/user.h"

int main(){
int fd[2];
char msg[]="Hello";
char buffer[50];

pipe(fd);
int pid=fork();

if(pid<0){
printf("fail");
exit(1);
}

 if(pid==0){
close(fd[0]);
write(fd[1],msg,sizeof(msg));
close(fd[1]);
exit(1);
}else{
close(fd[1]);
read(fd[0],buffer,sizeof(buffer));
printf("recieve%s",buffer);
close(fd[0]);
wait(0);
}
exit(0);
}

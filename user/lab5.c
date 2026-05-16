#include "kernel/types.h"
#include "user/user.h"
int main(){
int pid;
pid=fork();

if(pid<0){
printf("fail");
exit(10);

}
 if(pid==0){
printf("child execute");
char *args[]={"ls",0};
exec("ls" ,args);
printf("fail");
exit(10);

}
else{
wait(0);
printf("finish execute");
}
exit(0);
}

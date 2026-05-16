#include "user/user.h"

int
main()
{
  struct pinfo p;

  if(getprocinfo(getpid(), &p) < 0){
    printf("getprocinfo failed\n");
    exit(1);
  }

  printf("PID=%d START=%d END=%d CPU=%d MEM=%d EXIT=%d\n",
       p.pid, p.start_time, p.end_time, p.cputime, p.memsize, p.exit_status);
  exit(0);
}

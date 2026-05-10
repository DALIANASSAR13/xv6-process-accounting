#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  struct proc_stats st;

  // Ben-naddi el system call elly enti 3amalteeh
  if(getprocstats(&st) < 0){
    printf("Error: Could not get process accounting data\n");
    exit(1);
  }

  // Making the internal kernel data visible and readable 
  printf("\n--- XV6 PROCESS ACCOUNTING REPORT ---\n");
  printf("PID\tCPU_TICKS\tMEMORY\t\tEXIT_CODE\n");
  printf("----------------------------------------------\n");
  printf("PID: %d | CPU: %d | MEM: %ld | EXIT: %d\n", st.pid, st.cpu_ticks, st.mem_size, st.exit_status);
  exit(0);
}

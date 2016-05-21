#include <lib.h>
#define whosthere _whosthere 
#include <unistd.h>

int whosthere()
{
  message m; 
  return(_syscall (PM_PROC_NR, PM_WHOSTHERE, &m));
}

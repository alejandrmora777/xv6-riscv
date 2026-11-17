#include "kernel/types.h"
#include "user/user.h"

// Programa de prueba: gasta CPU y cada cierto tiempo imprime su PID.
int
main(int argc, char *argv[])
{
  int pid = getpid();
  for (int i = 1; i <= 5; i++) {
    for (volatile int j = 0; j < 100000000; j++) {
    }
    printf("pid %d: vuelta %d\n", pid, i);
  }
  exit(0);
}

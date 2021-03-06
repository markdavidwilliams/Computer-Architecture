#include <stdio.h>
#include "cpu.h"

/**
 * Main
 */
int main(int argc, char **argv)
{
  struct cpu cpu;

  if (argc != 2)
  {
    fprintf(stderr, "Usage: ls8 file.ls8\n");
  }

  cpu_init(&cpu);
  cpu_load(argv[1], &cpu);
  cpu_run(&cpu);

  return 0;
}
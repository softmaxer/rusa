#ifndef RUSA_CORE
#define RUSA_CORE

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>

const unsigned long MEGABYTE = 1024 * 1024;

typedef struct process {
  pid_t pid;
  unsigned long mem_usage;
  int time;
} process;

typedef struct mem_info {
  unsigned long free;
  unsigned long used;
  unsigned long swap;
  process **procs;
} mem_info;

mem_info *available_ram();

void get_procs(unsigned short len, process **procs);

#endif // RUSA_CORE

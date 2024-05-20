#include "rusa.h"

void available_ram(unsigned long* freeram) {
  struct sysinfo* ram_usage = malloc(sizeof(struct sysinfo));
  sysinfo(ram_usage);
  *freeram = ram_usage->freeram / MEGABYTE;
  free(ram_usage);
}

size_t delta(size_t* curr_usage, size_t* prev_usage) {
  return *curr_usage - *prev_usage;
}

void proc_suspend(pid_t pid) {
  kill(pid, SIGSTOP);
}

void proc_restart(pid_t pid) {
  kill(pid, SIGCONT);
}

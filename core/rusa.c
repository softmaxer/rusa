#include "rusa.h"

#include <sys/sysinfo.h>

mem_info *available_ram() {
  struct sysinfo *ram_usage = malloc(sizeof(struct sysinfo));
  sysinfo(ram_usage);
  mem_info *mymem_info = malloc(sizeof(mem_info));
  mymem_info->free = ram_usage->freeram / MEGABYTE;
  mymem_info->used = (ram_usage->totalram - ram_usage->freeram) / MEGABYTE;
  mymem_info->swap = ram_usage->totalswap / MEGABYTE;
  mymem_info->procs = (process **)malloc(ram_usage->procs * sizeof(process *));
  get_procs(ram_usage->procs, mymem_info->procs);
  free(ram_usage);
  return mymem_info;
}

void get_procs(unsigned short len, process **procs) {
  process **ptr = procs;
  for (int i = 0; i < len; i++) {
    ptr[i] = malloc(sizeof(process));
  }
  return;
}

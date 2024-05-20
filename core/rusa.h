#ifndef RUSA_CORE
#define RUSA_CORE

#include <stdlib.h>
#include <stdio.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

const unsigned long MEGABYTE = 1024 * 1024;

void available_ram(unsigned long* freeram);
size_t delta(size_t* prev_usage, size_t* curr_usage);

void proc_suspend(pid_t pid);
void proc_restart(pid_t pid);

#endif // RUSA_CORE

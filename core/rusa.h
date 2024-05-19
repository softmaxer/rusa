#ifndef RUSA_CORE
#define RUSA_CORE

#include <stdlib.h>
#include <stdio.h>
#include <sys/resource.h>
#include <sys/sysinfo.h>
#include <time.h>
#include <unistd.h>

const unsigned long MEGABYTE = 1024 * 1024;

void available_ram(size_t* freeram);
size_t delta(size_t* prev_usage, size_t* curr_usage);

#endif // RUSA_CORE

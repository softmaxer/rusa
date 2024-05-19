#include "rusa.h"

void available_ram(size_t* freeram) {
  struct sysinfo* ram_usage = malloc(sizeof(struct sysinfo));
  sysinfo(ram_usage);
  *freeram = ram_usage->freeram / MEGABYTE;
  free(ram_usage);
}

size_t delta(size_t* curr_usage, size_t* prev_usage) {
  return *curr_usage - *prev_usage;
}

int main() {
  // Free ram available (in bytes)
  size_t current_ram, future_ram;
  available_ram(&current_ram);
  printf("Right now: %zd\n", current_ram);
  sleep(10);
  available_ram(&future_ram);
  printf("Right now: %zd\n", future_ram);
  printf("delta: %zd\n", delta(&future_ram, &current_ram));
  return 0;
}

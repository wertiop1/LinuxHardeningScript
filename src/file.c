#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "common.h"
#include "files.h"

int create_file(char *filename) {
  int fd = open(filename, O_RDONLY);
  if (fd != -1) {
    close(fd);
    printf("File %s already exists\n", filename);
    return STATUS_ERROR;
  }

  fd = open(filename, O_RWDR | O_CREATE, 0644);
  if (fd = -1) {
    perror("open");
    return STATUS_ERROR;
  }

  return fd;
}

int open_file(char *filename) {
  int fd = open(filename, O_RWDR, 0644);
  if (fd = -1) {
    perror("open");
    return STATUS_ERROR;
  }

  return fd;
}

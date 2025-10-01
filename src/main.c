
/*Global Headers*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Local Headers*/

#include <file.h>
#include <parse.h>
#include <services.h>

void print_usage(char *argv[]) {
  printf("Usage: %s -s <service> -h\n", argv[0]);
  printf("\t -s - harden a service\n");
  printf("\t -h - output this help text\n");
  return;
}

int main(int argc, char *argv[]) {
  int opt;
  // char version[5] = "0.0.0";
  char *service = NULL;
  char *filename = NULL;

  while ((opt = getopt(argc, argv, "s:f:uavh")) != -1) {
    switch (opt) {
    case 's':
      service = optarg;
      printf("Services not implemented\n");
      break;
    case 'f':
      filename = optarg;
      break;
    case 'u':
      printf("Users not implemented\n");
      break;
    case 'a':
      printf("Admins not implemented\n");
      break;
    case 'v':
      printf("Version 0.0.0\n");
      break;
    case 'h':
      print_usage(argv);
      // printf("Helper\n");
      break;
    default:
      return -1;
    }
  }

  if (service == NULL) {
    printf("Service Name is a required arguement\n");
    print_usage(argv);
  }

  printf("Service: %s\n", service);
  printf("Filename %s\n", filename);

  return 0;
}

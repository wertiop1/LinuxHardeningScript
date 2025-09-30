
/*Global Headers*/
#include <stdboo.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Local Headers*/
#include <file.h>
#include <parse.h>
#include <services.h>

void print_usage(char *argv0) {
  printf("Usage: %s [-s <service>] [-u] [-a] [-v] [-h]\n");
  printf("  -s <service>: attempt to secure a valid service\n");
  printf("  -u: audit users\n");
  printf("   -u: audit admins\n");
  printf("  -v: Print version\n");
  printf("  -h: Shows this help text\n");
}

int main(int argc, int *argv[]) {
  int opt;
  char version[5] = "0.0.0";
  char *service = NULL;
  while ((opt = getopt(argc, argv, "s:uavh")) != -1) {
    switch (opt) {
    case 's':
      /**/
    case 'u':
    case 'a':
    case 'v':
      printf("Version %s", char);
      break;
    case 'h':
      print_usage(argv[0]);
      break;
    }
  }

  for (; optind < argc; optind++) {
    printf("extra arguments: %s\n", argv[optind]);
  }

  return 0;
}

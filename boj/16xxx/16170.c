#include <stdio.h>
#include <time.h>

int main(void) {
  struct tm *t = gmtime(&(time_t){time(NULL)});
  printf("%d\n%d\n%d", t->tm_year+1900, t->tm_mon+1, t->tm_mday);
  return 0;
}
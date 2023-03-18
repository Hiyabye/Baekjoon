#include <stdio.h>
#include <time.h>

int main(void) {
	time_t curr = time(NULL);
	struct tm *d = localtime(&curr);
	printf("%d-%d-%d", d->tm_year+1900, d->tm_mon+1, d->tm_mday);
	return 0;
}
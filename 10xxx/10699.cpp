#include <ctime>
#include <iostream>
using namespace std;

int main(void) {
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

  cout << tm.tm_year + 1900 << '-';
  if (tm.tm_mon + 1 < 10) cout << '0';
  cout << tm.tm_mon + 1 << '-';
  if (tm.tm_mday < 10) cout << '0';
  cout << tm.tm_mday << endl;

  return 0;
}
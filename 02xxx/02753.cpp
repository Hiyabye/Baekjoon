#include <iostream>
using namespace std;

void solve(void) {
  int year; cin >> year;

  if (year % 4 != 0) cout << 0;
  else if (year % 100 != 0) cout << 1;
  else if (year % 400 != 0) cout << 0;
  else cout << 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
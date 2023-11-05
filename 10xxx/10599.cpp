#include <iostream>
using namespace std;

bool solve(void) {
  int a, b, c, d; cin >> a >> b >> c >> d;
  if (a == 0 && b == 0 && c == 0 && d == 0) return false;

  cout << c-b << " " << d-a << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  while (solve());
  return 0;
}
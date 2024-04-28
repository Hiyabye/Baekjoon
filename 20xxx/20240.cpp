#include <cmath>
#include <iostream>
using namespace std;

bool solve(void) {
  int s; cin >> s;

  for (int a=1; a*a<=s; a++) {
    int b = sqrt(s-a*a);
    if (a * a + b * b == s) {
      cout << "0 0\n";
      cout << a << " " << b << "\n";
      cout << a-b << " " << a+b << "\n";
      cout << -b << " " << a << "\n";
      return true;
    }
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  if (!solve()) cout << "Impossible\n";
  return 0;
}
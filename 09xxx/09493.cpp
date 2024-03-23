#include <iostream>
#include <string>
using namespace std;

string format(int n) {
  return n < 10 ? "0" + to_string(n) : to_string(n);
}

bool solve(void) {
  int m, a, b; cin >> m >> a >> b;
  if (m == 0 && a == 0 && b == 0) return false;

  int t = (double)(3600 * m) / a - (double)(3600 * m) / b + 0.5;
  cout << t / 3600 << ":" << format(t / 60 % 60) << ":" << format(t % 60) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
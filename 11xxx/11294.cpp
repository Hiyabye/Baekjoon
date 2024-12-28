#include <iostream>
#include <string>
using namespace std;

inline char hex(int n) {
  return n < 10 ? n + '0' : n - 10 + 'A';
}

inline string calc(int b, int n) {
  string ret;
  while (n) {
    ret = hex(n % b) + ret;
    n /= b;
  }
  return ret;
}

bool solve(void) {
  string s; getline(cin, s);
  if (s == "#") return false;
  int b, n; cin >> b >> n; cin.ignore();

  cout << s << ", " << n << ", " << calc(b, n) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
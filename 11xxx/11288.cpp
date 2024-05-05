#include <iostream>
#include <string>
using namespace std;

long long power(long long base, long long exp, long long mod) {
  if (base == 0) return 0;

  long long ret = 1;
  while (exp) {
    if (exp & 1) ret = ret * base % mod;
    base = base * base % mod;
    exp >>= 1;
  }
  return ret;
}

void solve(void) {
  long long n, a, b; cin >> n >> a >> b;
  cin.ignore();
  string s; getline(cin, s);

  long long p = power(a % 26, b, 26);
  for (char c : s) {
    cout << (c == ' ' ? ' ' : (char)((c - 'A' - p + 26) % 26 + 'A'));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
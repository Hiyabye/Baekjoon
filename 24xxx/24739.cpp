#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

long long gcd(long long a, long long b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  string s; cin >> s;
  reverse(s.begin(), s.end());

  long long a = 0, b = 1, c = 1;
  for (char ch : s) {
    a = a * 2 + (ch - '0') * c;
    b *= 2;
    c *= 3;
  }
  b /= 2;

  long long g = gcd(a, b);
  a /= g; b /= g;

  if (a / b) cout << a / b << " ";
  if (a % b) cout << a % b << "/" << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int c2i(char c) { return c - '0'; }
inline char i2c(int i) { return i + '0'; }

string add(string a, string b) {
  int n = max(a.length(), b.length());
  while (a.length() < n) a += '0';
  while (b.length() < n) b += '0';

  int carry = 0;
  string c = "";
  for (int i=0; i<n; i++) {
    int sum = carry + c2i(a[i]) + c2i(b[i]);
    carry = sum / 10;
    c += i2c(sum % 10);
  }
  if (carry) c += '1';

  return c;
}

void solve(void) {
  int n; cin >> n;
  vector<string> f(n+2); // if n == 0, f[1] is used
  f[0] = "0"; f[1] = "1";
  for (int i=2; i<=n; i++) f[i] = add(f[i-1], f[i-2]);

  reverse(f[n].begin(), f[n].end());
  cout << f[n];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
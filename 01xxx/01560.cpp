#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

inline int c2i(char c) { return c - '0'; }
inline char i2c(int i) { return i + '0'; }

string add(const string &a, const string &b) {
  string c = "";
  int carry = 0;
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0 || j >= 0 || carry) {
    int sum = carry;
    if (i >= 0) sum += c2i(a[i--]);
    if (j >= 0) sum += c2i(b[j--]);
    carry = sum / 10;
    c += i2c(sum % 10);
  }
  
  reverse(c.begin(), c.end());
  return c;
}

string sub(const string &a, const string &b) {
  string c = "";
  int borrow = 0;
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0) {
    int diff = c2i(a[i]) - (j >= 0 ? c2i(b[j]) : 0) - borrow; i--; j--;
    borrow = diff < 0;
    diff += borrow * 10;
    c += i2c(diff);
  }

  int start = c.length() - 1;
  while (start >= 0 && c[start] == '0') start--;
  if (start < 0) return "0";
  c = c.substr(0, start + 1);

  reverse(c.begin(), c.end());
  return c;
}

void solve(void) {
  string n; cin >> n;

  cout << (n == "1" ? "1" : sub(add(n, n), "2"));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
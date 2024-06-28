#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string a, string b) {
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string c = "";
  int carry = 0;
  for (int i=0; i<max(a.length(), b.length()); i++) {
    int sum = carry;
    if (i < a.length()) sum += a[i] - '0';
    if (i < b.length()) sum += b[i] - '0';
    c += (sum % 10) + '0';
    carry = sum / 10;
  }
  if (carry) c += carry + '0';

  reverse(c.begin(), c.end());
  return c;
}

void solve(void) {
  int n; cin >> n;

  string a = "1", b = "1";
  for (int i=3; i<=n; i++) {
    string c = add(a, b);
    a = b;
    b = c;
  }

  cout << b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
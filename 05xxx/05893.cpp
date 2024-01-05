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
    c += (sum & 1) + '0';
    carry = sum >> 1;
  }
  if (carry) c += '1';

  reverse(c.begin(), c.end());
  return c;
}

void solve(void) {
  string n; cin >> n;

  cout << add(n + "0000", n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
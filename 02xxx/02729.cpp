#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve(void) {
  string a, b; cin >> a >> b;
  while (a[0] == '0') a.erase(a.begin());
  while (b[0] == '0') b.erase(b.begin());
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string c = "";
  int carry = 0;
  for (int i=0; i<max(a.length(), b.length()); i++) {
    int x = i < a.length() ? a[i] - '0' : 0;
    int y = i < b.length() ? b[i] - '0' : 0;
    int z = x + y + carry;
    c += (z % 2) + '0';
    carry = z / 2;
  }
  if (carry) c += '1';

  reverse(c.begin(), c.end());
  if (c.empty()) c = "0";

  cout << c << "\n"; 
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
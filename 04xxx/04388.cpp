#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a, b; cin >> a >> b;
  if (a == "0" && b == "0") return false;

  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  int ans = 0, carry = 0;
  for (int i=0; i<a.length() || i<b.length(); i++) {
    int x = (i < a.length() ? a[i]-'0' : 0);
    int y = (i < b.length() ? b[i]-'0' : 0);
    int sum = x + y + carry;
    carry = sum / 10;
    if (carry) ans++;
  }
  cout << ans << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
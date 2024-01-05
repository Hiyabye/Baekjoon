#include <iostream>
#include <vector>
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
  vector<string> dp(251, "");
  dp[0] = "1";
  dp[1] = "1";

  for (int i=2; i<=250; i++) {
    dp[i] = add(add(dp[i-1], dp[i-2]), dp[i-2]);
  }

  int n;
  while (cin >> n) {
    cout << dp[n] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(const string &s) {
  if (s.length() < 3) return false;
  if (s[0] >= s[1]) return false;

  bool up = true;
  for (int i=1; i<s.length(); i++) {
    if (s[i] == s[i-1]) return false;
    if (up && s[i] < s[i-1]) up = false;
    else if (!up && s[i] > s[i-1]) return false;
  }
  return !up;
}

vector<int> precompute(void) {
  vector<int> ret(1000001, 0);
  for (int i=1; i<=1000000; i++) {
    ret[i] = ret[i-1] + check(to_string(i));
  }
  return ret;
}

void solve(const vector<int> &dp) {
  int a, b; cin >> a >> b;

  cout << dp[b] - dp[a-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> dp = precompute();

  int t; cin >> t;
  while (t--) solve(dp);
  return 0;
}
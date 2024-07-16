#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

inline int calc(int cur, string op) {
  if (cur <= 0) return 0;
  if (op[0] == '+') return cur + stoi(op.substr(1));
  if (op[0] == '-') return cur - stoi(op.substr(1));
  if (op[0] == '*') return cur * stoi(op.substr(1));
  return cur / stoi(op.substr(1));
}

void solve(void) {
  int n; cin >> n;

  vector<int> dp1(n+1), dp2(n+1); dp1[0] = dp2[0] = 1;
  for (int i=1; i<=n; i++) {
    string a, b; cin >> a >> b;
    dp1[i] = max(calc(dp1[i-1], a), calc(dp1[i-1], b));
    dp2[i] = max({dp1[i-1], calc(dp2[i-1], a), calc(dp2[i-1], b)});
  }

  int ans = max(dp1[n], dp2[n]);
  if (ans <= 0) cout << "ddong game";
  else cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <map>
#include <tuple>
using namespace std;

map<tuple<int, int, int>, long long> dp;

long long calc(int a, int b, int k) {
  if (dp.find({a, b, k}) != dp.end()) return dp[{a, b, k}];
  if (a == 0 || b == 0 || k == 0) return dp[{a, b, k}] = 0;
  if (a == 1 && b == 1) return dp[{a, b, k}] = 1;
  return dp[{a, b, k}] = calc(a>>1, b>>1, k>>1) +
                         calc(a>>1, (b+1)>>1, (k+1)>>1) +
                         calc((a+1)>>1, b>>1, (k+1)>>1) +
                         calc((a+1)>>1, (b+1)>>1, (k+1)>>1);
}

void solve(int idx) {
  int a, b, k; cin >> a >> b >> k;

  cout << "Case #" << idx << ": " << calc(a, b, k) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
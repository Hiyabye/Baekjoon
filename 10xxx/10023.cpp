#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc_cow(const vector<long long> &v, long long x) {
  vector<long long> dp(x+1, 1e9); dp[0] = 0;
  for (int i=0; i<v.size(); i++) {
    for (int j=v[i]; j<=x; j++) {
      dp[j] = min(dp[j], dp[j-v[i]] + 1);
    }
  }
  return dp[x];
}

inline long long calc_sub(const vector<long long> &v, vector<long long> f) {
  for (int i=1; i<f.size(); i++) {
    f[i] += i;
  }
  long long sum = f[0];
  for (int i=1; i<f.size(); i++) {
    f[i] -= sum;
    sum += f[i];
  }
  long long ret = 0;
  for (int i=0; i<f.size(); i++) {
    ret += calc_cow(v, f[i]);
  }
  return ret;
}

void solve(void) {
  int n, b; cin >> n >> b;
  vector<long long> v(b, 0), f(n);
  for (int i=0; i<b; i++) cin >> v[i];
  for (int i=0; i<n; i++) cin >> f[i];

  vector<vector<long long>> subf;
  vector<long long> tmp;
  for (int i=0; i<n; i++) {
    if (f[i] == 0) {
      if (!tmp.empty()) subf.push_back(tmp);
      tmp.clear();
    } else {
      tmp.push_back(f[i]);
    }
  }
  if (!tmp.empty()) subf.push_back(tmp);

  long long ans = 0;
  for (const auto &sf : subf) {
    ans += calc_sub(v, sf);
  }
  cout << (ans >= 1e9 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <deque>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
using int128 = __int128;

struct Line {
  ll m, c; // y = mx + c
  ll calc(ll x) { return m * x + c; }
};

inline bool check(const Line &l1, const Line &l2, const Line &l3) {
  return (int128)(l3.c - l1.c) * (l2.m - l1.m) > (int128)(l2.c - l1.c) * (l3.m - l1.m);
}

void solve(void) {
  int n; cin >> n;
  vector<ll> a(n), b(n);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<n; i++) cin >> b[i];

  vector<ll> dp(n, 0);
  deque<Line> dq; dq.push_back({b[0], 0});

  for (int i=1; i<n; i++) {
    while (dq.size() >= 2 && dq[0].calc(a[i]) >= dq[1].calc(a[i])) dq.pop_front();
    dp[i] = dq[0].calc(a[i]);
    Line l = {b[i], dp[i]};
    while (dq.size() >= 2 && check(dq[dq.size()-2], dq.back(), l)) dq.pop_back();
    dq.push_back(l);
  }
  cout << dp[n-1];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
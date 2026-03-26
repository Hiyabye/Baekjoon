#include <iostream>
#include <vector>
using namespace std;

inline vector<int> calc(int n, int k, vector<int> &s, vector<int> &d) {
  vector<int> ret(n+1, 0);
  for (int i=1; i<=n; i++) ret[d[i]] = s[i];
  return ret;
}

void solve(void) {
  int n, k; cin >> n >> k;
  vector<int> s(n+1, 0), d(n+1, 0);
  for (int i=1; i<=n; i++) cin >> s[i];
  for (int i=1; i<=n; i++) cin >> d[i];

  vector<int> p(n+1, 0);
  for (int i=1; i<=n; i++) p[i] = i;
  while (k--) p = calc(n, k, p, d);
  for (int i=1; i<=n; i++) {
    cout << s[p[i]] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
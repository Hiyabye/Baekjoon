#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n+1);
  for (int i=0; i<n; i++) cin >> a[i];

  stack<pair<int, int> > s;
  for (int i=0; i<n; i++) {
    while (!s.empty() && s.top().first < a[i]) s.pop();
    if (s.empty()) cout << "0 ";
    else cout << s.top().second << " ";
    s.push(make_pair(a[i], i+1));
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
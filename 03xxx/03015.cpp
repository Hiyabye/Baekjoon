#include <iostream>
#include <vector>
#include <stack>
#include <utility>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  long long ans = 0;
  stack<pair<int, int> > s;
  for (int i=0; i<n; i++) {
    int same = 1;
    while (!s.empty() && s.top().first <= a[i]) {
      ans += s.top().second;
      if (s.top().first == a[i]) same += s.top().second;
      s.pop();
    }
    if (!s.empty()) ans++;
    s.push(make_pair(a[i], same));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
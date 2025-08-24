#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  queue<int> q;
  for (int i=1; i<=1000; i++) for (int j=0; j<n; j++) {
    if (v[j] >= i) q.push(j);
  }

  vector<int> ans(n);
  for (int i=1; !q.empty(); i++) {
    ans[q.front()] = i; q.pop();
  }

  for (int i=0; i<n; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
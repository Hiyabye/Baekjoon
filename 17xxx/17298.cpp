#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  vector<int> ans(n, -1);
  stack<int> s;
  s.push(0);
  for (int i=1; i<n; i++) {
    while (!s.empty() && a[s.top()] < a[i]) {
      ans[s.top()] = a[i];
      s.pop();
    }
    s.push(i);
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
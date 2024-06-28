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

  long long ans = 0;
  stack<int> s;
  s.push(a[0]);
  for (int i=1; i<n; i++) {
    while (!s.empty() && a[i] >= s.top()) s.pop();
    ans += s.size();
    s.push(a[i]);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
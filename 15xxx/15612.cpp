#include <iostream>
#include <stack>
using namespace std;

void solve(void) {
  long long v; cin >> v;

  stack<int> ans;
  while (v) {
    ans.push(v % 3);
    v /= 3;
  }
  if (ans.empty()) { cout << "0\n"; return; }

  while (!ans.empty()) {
    cout << ans.top(); ans.pop();
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}
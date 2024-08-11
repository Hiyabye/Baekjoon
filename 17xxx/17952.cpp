#include <iostream>
#include <stack>
#include <utility>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  stack<pair<int, int>> st;
  while (n--) {
    int op; cin >> op;
    if (op == 1) {
      int a, t; cin >> a >> t;
      st.push({a, t});
    }
    if (st.empty()) continue;
    auto [a, t] = st.top(); st.pop();
    if (--t == 0) ans += a;
    else st.push({a, t});
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
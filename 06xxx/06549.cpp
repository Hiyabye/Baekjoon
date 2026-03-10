#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  vector<long long> h(n, 0);
  for (int i=0; i<n; i++) cin >> h[i];

  stack<int> st;
  long long ans = 0;
  for (int i=0; i<n; i++) {
    while (!st.empty() && h[st.top()] >= h[i]) {
      int j = st.top(); st.pop();
      int k = st.empty() ? -1 : st.top();
      ans = max(ans, h[j] * (i - k - 1));
    }
    st.push(i);
  }

  while (!st.empty()) {
    int j = st.top(); st.pop();
    int k = st.empty() ? -1 : st.top();
    ans = max(ans, h[j] * (n - k - 1));
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
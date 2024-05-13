#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(const string &s) {
  stack<char> st;
  for (char c : s) {
    if (st.empty() || st.top() != c) {
      st.push(c);
    } else {
      st.pop();
    }
  }
  return st.empty();
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    ans += check(s);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
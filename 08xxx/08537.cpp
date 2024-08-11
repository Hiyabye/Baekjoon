#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline int calc(const string &s) {
  unordered_set<char> st;
  for (char c : s) st.insert(c);
  return st.size();
}

void solve(void) {
  int n; cin >> n;

  int ans = 0;
  while (n--) {
    string s; cin >> s;
    ans = max(ans, calc(s));
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
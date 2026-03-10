#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  string s; cin >> s;

  unordered_set<int> st; int cur = 0;
  for (const char &c : s) {
    if (c == '0') {
      cur++;
    } else {
      if (cur) st.insert(cur);
      cur = 0;
    }
  }
  if (cur) st.insert(cur);

  cout << st.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
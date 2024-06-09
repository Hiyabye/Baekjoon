#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;

  set<char> st;
  for (char c : s) {
    if (st.find(c) != st.end()) return false;
    st.insert(c);
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
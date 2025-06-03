#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  string w; cin >> w;
  string s; cin >> s;

  set<char> st;
  string key = "";
  for (char c : w) {
    if (st.find(c) != st.end()) continue;
    st.insert(c); key += c;
  }
  for (char c='A'; c<='Z'; c++) {
    if (st.find(c) == st.end()) key += c;
  }

  for (char c : s) {
    cout << key[c - 'A'];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
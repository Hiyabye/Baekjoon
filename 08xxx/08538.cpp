#include <cctype>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

inline string calc(const string &s) {
  string ret = "";
  for (char c : s) {
    if (c == '-') continue;
    ret += tolower(c);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;

  unordered_set<string> st;
  while (n--) {
    string s; cin >> s;
    st.insert(calc(s));
  }
  cout << st.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
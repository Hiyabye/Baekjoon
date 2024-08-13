#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int s; cin >> s;
  cin.ignore();

  string ans;
  unordered_set<char> st;
  while (s--) {
    string t; getline(cin, t);
    for (char c : t) {
      if (c == ' ' || st.find(c) != st.end()) continue;
      st.insert(c);
      ans += c;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
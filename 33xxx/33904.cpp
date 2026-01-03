#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  vector<char> ans;
  unordered_set<char> st;

  string s;
  while (getline(cin, s)) {
    while (s[0] == ' ') s.erase(0, 1);
    if (s.find("for") == string::npos) break;
    auto it = find(ans.begin(), ans.end(), s[9]);
    if (it != ans.end()) ans.erase(it);
    ans.push_back(s[9]); st.insert(s[9]);
  }

  auto it = st.begin();
  while (it != st.end()) {
    if (s.find(*it) == string::npos) it = st.erase(it);
    else it++;
  }

  int sp = 0;
  for (const char &c : ans) {
    if (st.find(c) == st.end()) continue;
    cout << string(sp++, ' ') << "for (int " << c << " = 1; " << c << " < 9; " << c << "++)\n";
    st.erase(c);
  }
  cout << string(sp, ' ') << s;
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
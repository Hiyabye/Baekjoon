#include <iostream>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  stack<int> stk;
  vector<pair<int, int>> v;
  for (int i=0; i<s.length(); i++) {
    if (s[i] == '(') stk.push(i);
    else if (s[i] == ')') {
      v.push_back({stk.top(), i});
      stk.pop();
    }
  }

  set<string> ans;
  for (int mask=1; mask<(1<<v.size()); mask++) {
    set<int> st;
    for (int i=0; i<v.size(); i++) {
      if (mask & (1 << i)) {
        st.insert(v[i].first);
        st.insert(v[i].second);
      }
    }
    string t = "";
    for (int i=0; i<s.length(); i++) {
      if (st.find(i) == st.end()) t += s[i];
    }
    ans.insert(t);
  }

  for (string t : ans) {
    cout << t << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
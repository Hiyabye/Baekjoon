#include <algorithm>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

inline int search(const string &s) {
  for (int i=0; i<s.length(); i++) {
    if (s[i] == '&' || s[i] == '|') return i;
  }
  return -1;
}

inline int calc(unordered_map<string, int> &mp, stack<string> &st) {
  int ret = 0;
  while (!st.empty()) {
    string x = st.top(); st.pop();
    ret = max(ret, mp[x]);
  }
  return ret;
}

void solve(void) {
  string a; cin >> a;
  string b; cin >> b;
  cin.ignore();

  unordered_map<string, int> mp;
  stringstream ss(a); string s;
  while (getline(ss, s, ',')) {
    int idx = s.find(':');
    mp[s.substr(0, idx)] = stoi(s.substr(idx+1));
  }
  
  int ans = 1e9;
  stack<string> st;
  while (!b.empty()) {
    int idx = search(b);
    st.push(b.substr(0, idx));
    b.erase(0, idx);
    if (b.front() == '|') ans = min(ans, calc(mp, st));
    b.erase(0, 1);
  }
  ans = min(ans, calc(mp, st));

  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
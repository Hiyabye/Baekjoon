#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  int n; string s; cin >> n >> s;

  string t;
  set<char> st;
  for (char c : s) {
    if (st.find(c) != st.end()) continue;
    st.insert(c);
    t += c;
  }
  t = to_string(n + 1906) + t + to_string(s.length() - t.length() + 4);
  reverse(t.begin(), t.end());
  
  cout << "smupc_" << t;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
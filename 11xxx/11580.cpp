#include <iostream>
#include <set>
#include <string>
#include <utility>
using namespace std;

void solve(void) {
  int l; cin >> l;
  string s; cin >> s;

  pair<int, int> cur = {0, 0};
  set<pair<int, int>> st; st.insert(cur);
  for (char c : s) {
    switch (c) {
      case 'E': cur.first++; break;
      case 'W': cur.first--; break;
      case 'S': cur.second--; break;
      case 'N': cur.second++; break;
    }
    st.insert(cur);
  }
  cout << st.size();
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int solve(void) {
  int n; cin >> n;
  set<string> st1;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    st1.insert(s);
  }

  int m; cin >> m;
  vector<string> v(m);
  for (int i=0; i<m; i++) cin >> v[i];

  set<string> st2;
  for (int i=0; i<m; i++) {
    if (st1.find(v[i]) != st1.end()) st2.insert(v[i]);
    if (st2.size() * 2 >= n) return i+1;
  }
  return m;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
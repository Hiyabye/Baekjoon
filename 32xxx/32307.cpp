#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n; cin >> n;
  unordered_set<string> st1, st2;
  while (n--) {
    string s; cin >> s;
    st1.insert(s);
  }

  for (string s1 : st1) for (string s2 : st1) {
    st2.insert(s1 + s2);
  }

  int m; cin >> m;
  while (m--) {
    string s; cin >> s;
    if (st1.find(s) != st1.end()) {
      cout << "1\n";
    } else if (st2.find(s) != st2.end()) {
      cout << "2\n";
    } else {
      cout << "0\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
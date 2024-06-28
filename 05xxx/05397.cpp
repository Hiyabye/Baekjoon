#include <iostream>
#include <string>
#include <list>
using namespace std;

void solve(void) {
  string s;
  cin >> s;
  list<char> l;
  auto cur = l.end();
  
  for (auto c : s) {
    if (c == '<') {
      if (cur != l.begin()) cur--;
    } else if (c == '>') {
      if (cur != l.end()) cur++;
    } else if (c == '-') {
      if (cur != l.begin()) {
        cur--;
        cur = l.erase(cur);
      }
    } else {
      l.insert(cur, c);
    }
  }

  for (auto c : l) {
    cout << c;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
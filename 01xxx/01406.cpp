#include <iostream>
#include <string>
#include <list>
using namespace std;

void solve(void) {
  string s;
  cin >> s;
  list<char> l;
  for (auto c: s) {
    l.push_back(c);
  }
  auto cur = l.end();

  int m;
  char command, $;
  cin >> m;
  while (m--) {
    cin >> command;
    if (command == 'L') {
      if (cur != l.begin()) cur--;
    } else if (command == 'D') {
      if (cur != l.end()) cur++;
    } else if (command == 'B') {
      if (cur != l.begin()) {
        cur--;
        cur = l.erase(cur);
      }
    } else if (command == 'P') {
      cin >> $;
      l.insert(cur, $);
    }
  }

  for (auto c: l) {
    cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
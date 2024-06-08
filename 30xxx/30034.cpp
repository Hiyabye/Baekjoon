#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve(void) {
  unordered_set<char> a;
  a.insert(' ');

  int n; cin >> n;
  while (n--) {
    char c; cin >> c;
    a.insert(c);
  }

  int m; cin >> m;
  while (m--) {
    char c; cin >> c;
    a.insert(c);
  }

  int k; cin >> k;
  while (k--) {
    char c; cin >> c;
    if (a.find(c) != a.end()) a.erase(c);
  }

  int s; cin >> s;
  cin.ignore();
  string str;
  getline(cin, str);

  if (a.find(str[0]) == a.end()) cout << str[0];
  for (int i=1; i<s; i++) {
    if (a.find(str[i]) == a.end()) cout << str[i];
    else if (a.find(str[i-1]) == a.end()) cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
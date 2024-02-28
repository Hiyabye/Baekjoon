#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(void) {
  string a; cin >> a;

  char b; set<char> s;
  while (cin >> b) s.insert(b);

  for (char c : a) {
    cout << (s.count(c) && c >= 'A' && c <= 'Z' ? (char)(c-'A'+'a') : c);
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
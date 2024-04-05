#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  map<string, bool> m;
  while (n--) {
    string s; cin >> s;
    m[s] = true;
  }

  for (char c='A'; c<='J'; c++) {
    for (int i=1; i<=20; i++) {
      cout << (m[c+to_string(i)] ? "o" : ".");
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
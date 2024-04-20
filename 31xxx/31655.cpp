#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; cin >> s;

  if (stoi(s.substr(0, 2)) > 12) cout << "EU";
  else if (stoi(s.substr(3, 2)) > 12) cout << "US";
  else cout << "either";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
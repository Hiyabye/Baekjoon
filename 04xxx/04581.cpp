#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; cin >> s;
  if (s == "#") return false;

  int ans = 0, quorum = 0;
  for (char c : s) {
    ans += (c == 'Y') - (c == 'N');
    quorum += (c == 'A');
  }

  if (quorum >= (s.length()+1)/2) cout << "need quorum";
  else cout << (ans ? (ans > 0 ? "yes" : "no") : "tie");
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
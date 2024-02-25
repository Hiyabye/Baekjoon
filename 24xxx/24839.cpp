#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string i; cin >> i;
  string p; cin >> p;

  int cur = 0;
  for (char ch : p) {
    if (ch == i[cur]) cur++;
  }

  cout << "Case #" << idx << ": ";
  if (cur >= i.length()) cout << p.length() - i.length() << "\n";
  else cout << "IMPOSSIBLE" << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
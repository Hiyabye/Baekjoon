#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string s, t; cin >> s >> t;

  int d = 0;
  for (char c : s) d += (c == 'w');
  for (char c : t) d -= (c == 'w');

  if (d) cout << (d < 0 ? "Manners maketh man" : "Oryang");
  else   cout << (s == t ? "Good" : "Its fine");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
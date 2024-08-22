#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b, c; int d; cin >> a >> b >> c >> d;

  cout << a << " ";
  if (stoi(b.substr(0, 4)) >= 2010 || stoi(c.substr(0, 4)) >= 1991) cout << "eligible";
  else if (d >= 41) cout << "ineligible";
  else cout << "coach petitions";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
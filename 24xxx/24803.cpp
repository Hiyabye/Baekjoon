#include <iostream>
using namespace std;

void solve(void) {
  int g, s, c; cin >> g >> s >> c;

  if (3*g+2*s+c >= 8) cout << "Province or ";
  else if (3*g+2*s+c >= 5) cout << "Duchy or ";
  else if (3*g+2*s+c >= 2) cout << "Estate or ";

  if (3*g+2*s+c >= 6) cout << "Gold";
  else if (3*g+2*s+c >= 3) cout << "Silver";
  else cout << "Copper";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void solve(void) {
  double n; string s; cin >> n >> s;

  cout << fixed << setprecision(4);
  if (s == "kg") cout << n * 2.2046 << " lb\n";
  else if (s == "lb") cout << n * 0.4536 << " kg\n";
  else if (s == "l") cout << n * 0.2642 << " g\n";
  else if (s == "g") cout << n * 3.7854 << " l\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
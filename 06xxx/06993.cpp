#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string w; int n; cin >> w >> n;

  cout << "Shifting " << w << " by " << n << " positions gives us: ";
  cout << w.substr(w.length()-n) << w.substr(0, w.length()-n) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
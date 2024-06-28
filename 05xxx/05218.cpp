#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string a, b;
  cin >> a >> b;

  cout << "Distances: ";
  for (auto i=0; i<a.length(); i++) {
    cout << (b[i] - a[i] + 26) % 26 << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
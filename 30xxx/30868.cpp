#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=0; i<n/5; i++) cout << "++++ ";
  for (int i=0; i<n%5; i++) cout << "|";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
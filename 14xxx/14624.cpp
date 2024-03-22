#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  if (!(n & 1)) {
    cout << "I LOVE CBNU";
    return;
  }

  for (int i=0; i<n; i++) cout << "*";
  cout << "\n";
  for (int i=0; i<=n/2; i++) {
    for (int j=0; j<n/2-i; j++) cout << " ";
    cout << "*";
    for (int j=0; j<2*i-1; j++) cout << " ";
    if (i) cout << "*";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
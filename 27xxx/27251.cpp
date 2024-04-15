#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; i<=n && i<=10; i++) {
    for (int j=0; j<i*i; j++) cout << "*";
    cout << "\n";
  }

  for (int i=11; i<=n; i++) {
    for (int j=0; j<100; j++) cout << "*";
    cout << "...\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
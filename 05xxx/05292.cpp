#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; i<=n; i++) {
    if (!(i % 15)) cout << "DeadMan\n";
    else if (!(i % 3)) cout << "Dead\n";
    else if (!(i % 5)) cout << "Man\n";
    else cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
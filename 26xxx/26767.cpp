#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; i<=n; i++) {
    if (!(i % 7) && !(i % 11)) cout << "Wiwat!";
    else if (!(i % 7)) cout << "Hurra!";
    else if (!(i % 11)) cout << "Super!";
    else cout << i;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
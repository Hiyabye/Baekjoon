#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  for (int i=1; i<=n; i++) {
    cout << i << " ";
    if (!(i % 6)) cout << "Go! ";
  }
  if (n % 6) cout << "Go!";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
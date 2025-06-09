#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  if (n & 1) {
    cout << "Yes\n";
  } else {
    cout << "No";
    return;
  }

  for (int i=1; i<=n-1; i++) cout << i << " " << i+1 << "\n";
  for (int i=1; i<=n-1; i++) if (i & 1) cout << i << " " << i+1 << "\n";
  for (int i=1; i<=n-2; i+=2) cout << i << " " << n << "\n";
  for (int i=1; i<=n-1; i++) if (!(i & 1)) cout << i << " " << i+1 << "\n";
  for (int i=1; i<=n-2; i+=2) cout << i << " " << n << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
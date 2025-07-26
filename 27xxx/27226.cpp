#include <iostream>
using namespace std;

void solve(void) {
  int a, b, k; cin >> a >> b >> k;

  for (long long i=a; i<=b; i++) {
    for (int j=1; j<=i && j<=k; j++) {
      cout << (i-1)*i/2+j << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
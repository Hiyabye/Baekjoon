#include <iostream>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 0, b = 1;
  for (int i=0; i<n; i++) {
    int c = (a + b) % MOD;
    a = b;
    b = c;
  }
  cout << a << " " << n-2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
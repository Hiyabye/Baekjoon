#include <iostream>
using namespace std;

void solve(int k) {
  int n, d, b, e; cin >> n >> d >> b >> e;
  cout << "Problem set " << k << ": " << n << " / " << d << ", base 7 digits " << b << " through " << e << ": ";

  n %= d;
  for (int i=0; i<=e; i++) {
    n *= 7;
    if (i >= b) cout << n / d;
    n %= d;
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
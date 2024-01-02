#include <iostream>
#include <vector>
#include <cmath>
#define MOD 1000000000
using namespace std;

vector<long long> a(2000001, 0);

void precompute(void) {
  a[1000000] = 0;
  a[1000001] = 1;
  for (int i=1000002; i<=2000000; i++) {
    a[i] = (a[i-1] + a[i-2]) % MOD;
  }
  for (int i=999999; i>=0; i--) {
    a[i] = (a[i+2] - a[i+1]) % MOD;
  }
}

void solve(void) {
  int n;
  cin >> n;
  
  cout << (a[n+1000000] > 0 ? 1 : (a[n+1000000] < 0 ? -1 : 0)) << "\n";
  cout << abs(a[n+1000000]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precompute();
  solve();
  return 0;
}
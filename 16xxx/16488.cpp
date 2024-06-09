#include <iostream>
using namespace std;

void solve(void) {
  long long n, k; cin >> n >> k;

  cout << n * n * k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
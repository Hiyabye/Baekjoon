#include <iostream>
using namespace std;

void solve(void) {
  long long n; cin >> n;

  cout << n*(n-1)*(n-2)*(n-3)*(n-4)/120;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
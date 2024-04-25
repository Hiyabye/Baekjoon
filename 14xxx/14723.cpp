#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int a = 1, b = 2;
  while (a < n) a += b++;
  cout << a-n+1 << " " << b-a+n-1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
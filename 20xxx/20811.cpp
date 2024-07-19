#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> f(21, 1);
  for (int i=3; i<=20; i++) f[i] = f[i-1] + f[i-2];
  for (int i=2; i<=20; i++) f[i] += f[i-1];

  for (int i=1; i<=20; i++) {
    if (n <= f[i]) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
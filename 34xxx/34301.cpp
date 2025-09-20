#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<int> v(5, 0);
  v[4] = n / 150; n %= 150;
  v[3] = n / 30; n %= 30;
  v[2] = n / 15; n %= 15;
  v[1] = n / 5; n %= 5;
  v[0] = n / 1; n %= 1;

  for (int x : v) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
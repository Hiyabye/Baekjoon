#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int o; cin >> o;

  cout << o + o / (n-1) - (o % (n-1) == 0) << " " << o + o / (n-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
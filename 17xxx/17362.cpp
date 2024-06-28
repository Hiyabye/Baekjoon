#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << min((n-1)%8+1, 9-(n-1)%8);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
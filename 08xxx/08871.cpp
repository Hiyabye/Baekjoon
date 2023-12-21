#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  cout << 2*(n+1) << " " << 3*(n+1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
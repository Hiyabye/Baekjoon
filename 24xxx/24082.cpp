#include <iostream>
using namespace std;

void solve(void) {
  int x; cin >> x;

  cout << x * x * x;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int c, k, p; cin >> c >> k >> p;

  cout << c*(c+1)*(3*k+p*(2*c+1))/6;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(4), b(4);
  for (int i=0; i<4; i++) cin >> a[i] >> b[i], b[i] -= a[i];

  cout << b[3] + b[2] + b[1] << "\n" << b[3] + b[2] << "\n" << b[3];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

char solve(void) {
  vector<int> x(5), y(5);
  for (int i=0; i<5; i++) cin >> x[i];
  for (int i=0; i<5; i++) cin >> y[i];

  for (int i=0; i<5; i++) {
    if (x[i] == y[i]) return 'N';
  }
  return 'Y';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
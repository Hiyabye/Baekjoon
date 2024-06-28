#include <iostream>
#include <vector>
using namespace std;

char solve(void) {
  vector<int> v(8);
  for (int i=0; i<8; i++) cin >> v[i];

  for (int i=0; i<8; i++) {
    if (v[i] == 9) return 'F';
  }
  return 'S';
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
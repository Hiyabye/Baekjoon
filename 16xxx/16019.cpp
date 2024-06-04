#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(5, 0);
  for (int i=1; i<=4; i++) cin >> v[i];
  for (int i=1; i<=4; i++) v[i] += v[i-1];

  for (int i=0; i<=4; i++) {
    for (int j=0; j<=4; j++) {
      cout << v[max(i, j)] - v[min(i, j)] << " ";
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
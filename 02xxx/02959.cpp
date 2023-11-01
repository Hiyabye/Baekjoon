#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(void) {
  vector<int> v(4);
  for (int i=0; i<4; i++) cin >> v[i];
  sort(v.begin(), v.end());

  cout << v[0] * v[2];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
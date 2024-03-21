#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(7);
  for (int i=0; i<7; i++) cin >> v[i];
  sort(v.begin(), v.end());

  cout << v[0] << " " << v[1] << " " << v[6]-v[1]-v[0];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
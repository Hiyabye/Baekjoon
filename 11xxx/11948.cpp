#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve(void) {
  vector<int> v(6);
  for (int i=0; i<6; i++) cin >> v[i];

  cout << accumulate(v.begin(), v.end(), 0) - min(min(v[0], v[1]), min(v[2], v[3])) - min(v[4], v[5]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
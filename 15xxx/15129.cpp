#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  vector<int> x(23); int y;
  for (int i=0; i<23; i++) cin >> x[i] >> y;

  sort(x.begin()+1, x.begin()+12);
  sort(x.begin()+12, x.end());

  return x[11] > 0 && x[11] > x[0] && x[11] > x[21];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
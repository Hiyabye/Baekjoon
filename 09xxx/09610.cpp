#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x, y;
  cin >> n;
  
  vector<int> ans(5, 0);
  while (n--) {
    cin >> x >> y;
    if (x > 0 && y > 0) ans[0]++;
    else if (x < 0 && y > 0) ans[1]++;
    else if (x < 0 && y < 0) ans[2]++;
    else if (x > 0 && y < 0) ans[3]++;
    else ans[4]++;
  }

  for (int i=0; i<4; i++) {
    cout << "Q" << i+1 << ": " << ans[i] << "\n";
  }
  cout << "AXIS: " << ans[4];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
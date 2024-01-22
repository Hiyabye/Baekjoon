#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int h, w; cin >> h >> w;
  vector<string> a(h);
  for (int i=0; i<h; i++) cin >> a[i];

  int one = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) one += (a[i][j] == '1');
  cout << min(one, w*h-one) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

void solve(void) {
  int n, w, h, l; cin >> n >> w >> h >> l;

  cout << min(n, (w/l)*(h/l));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
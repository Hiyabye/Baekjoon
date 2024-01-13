#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int h, w; cin >> h >> w;
  vector<string> v(h);
  for (int i=0; i<h; i++) cin >> v[i];

  for (int i=0; i<h; i++) {
    for (auto it=v[i].rbegin(); it!=v[i].rend(); it++) cout << *it;
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
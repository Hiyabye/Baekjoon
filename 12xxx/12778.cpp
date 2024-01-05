#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m; char c; cin >> m >> c;

  if (c == 'C') {
    vector<char> v(m);
    for (int i=0; i<m; i++) cin >> v[i];
    for (int i=0; i<m; i++) cout << (int)(v[i]-64) << " ";
  } else if (c == 'N') {
    vector<int> v(m);
    for (int i=0; i<m; i++) cin >> v[i];
    for (int i=0; i<m; i++) cout << (char)(v[i]+64) << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(10);
  for (int i=0; i<10; i++) cin >> v[i];

  for (int i=0; i<10; i++) cout << v[i] << " ";
  cout << "\n";

  bool m = false, z = false;
  for (int i=0; i<10; i++) {
    if (v[i] == 18) m = true;
    if (v[i] == 17) z = true;
  }
  cout << (m && z ? "both" : m ? "mack" : z ? "zack" : "none") << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}
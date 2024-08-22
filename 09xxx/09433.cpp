#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> v(20);
  for (int i=0; i<20; i++) cin >> v[i];

  for (int i=19; i>0; i--) {
    v[i-1] += v[i] / 2;
    v[i] %= 2;
  }

  for (int i=0; i<20; i++) {
    cout << v[i] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}
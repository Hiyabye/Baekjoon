#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> a(6), b(6);
  for (int i=0; i<6; i++) cin >> a[i];
  for (int i=0; i<6; i++) cin >> b[i];

  int ans = 0, cnt = 0;
  for (int i=0; i<6; i++) for (int j=0; j<6; j++) {
    if (a[i] > b[j]) ans++;
    if (a[i] != b[j]) cnt++;
  }
  cout << fixed << setprecision(5) << (double)ans / cnt;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
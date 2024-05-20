#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  string k; cin >> k;

  int cnt = 0;
  for (int i=0; i<n; i++) {
    if ((k[i] - '0') & 1) cnt++;
    else cnt--;
  }
  cout << (cnt ? (cnt > 0) : -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
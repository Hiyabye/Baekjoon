#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;

  int sum = 0;
  for (int i=0; i<n; i++) {
    int w; cin >> w;
    sum += w;
  }
  cout << (sum % 3 == 0 ? "yes" : "no");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
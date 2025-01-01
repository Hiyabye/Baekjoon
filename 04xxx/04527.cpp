#include <iostream>
using namespace std;

void solve(void) {
  int i; cin >> i;

  int sum = 0;
  while (i--) {
    int s, r; cin >> s >> r;
    sum += s * r;
  }
  cout << 36*36/sum << " " << 36*36*2/sum << " " << 36*36*3/sum << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}
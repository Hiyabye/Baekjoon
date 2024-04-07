#include <iostream>
using namespace std;

void solve(int idx) {
  int n, r1, c1, r2, c2; cin >> n >> r1 >> c1 >> r2 >> c2;

  cout << "Case " << idx << ": " << (abs(r1-r2) * abs(c1-c2) == 2 ? "YES" : "NO") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
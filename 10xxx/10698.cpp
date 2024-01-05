#include <iostream>
using namespace std;

void solve(int idx) {
  int x, y, z; char o, e;
  cin >> x >> o >> y >> e >> z;

  cout << "Case " << idx << ": " << (o == '+' ? (x + y == z ? "YES" : "NO") : (x - y == z ? "YES" : "NO")) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
#include <iostream>
using namespace std;

void solve(int idx) {
  bool ans = true;
  for (int i=0; i<10; i++) {
    int x; cin >> x;
    if (x != i % 5 + 1) ans = false;
  }
  if (ans) cout << idx << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}
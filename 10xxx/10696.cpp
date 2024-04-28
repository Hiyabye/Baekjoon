#include <iostream>
#include <string>
using namespace std;

void solve(int idx) {
  string n; int x; cin >> n >> x;

  int ans = 0;
  for (char c : n) {
    ans = (ans * 10 + c - '0') % x;
  }
  cout << "Case " << idx << ": " << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
#include <iostream>
using namespace std;

void solve(int idx) {
  int n, m; cin >> n >> m;

  cout << "Case " << idx << ": " << m-n+1 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
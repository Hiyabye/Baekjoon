#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<int> x(n+1);
  for (int i=n; i>=0; i--) cin >> x[i];

  cout << "Case " << idx << ": " << n - 1;
  for (int i=n; i>=1; i--) cout << " " << i * x[i];
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
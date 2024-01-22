#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=n-1; i>=0; i--) cout << v[i] << "\n";
  cout << "0\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int sum = v[(n-1)/2] + v[n/2];
  cout << "Case " << idx << ": " << sum / 2 << "." << (sum & 1 ? "5" : "0") << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
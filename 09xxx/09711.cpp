#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int p, q; cin >> p >> q;

  vector<long long> v(p+1);
  v[1] = 1; v[2] = 1;
  for (int i=3; i<=p; i++) v[i] = (v[i-1] + v[i-2]) % q;

  cout << "Case #" << idx << ": " << v[p] % q << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
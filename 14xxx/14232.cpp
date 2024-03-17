#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  long long k; cin >> k;

  vector<long long> ans;
  for (long long i=2; i*i<=k; i++) {
    while (!(k % i)) {
      ans.push_back(i);
      k /= i;
    }
  }
  if (k > 1) ans.push_back(k);

  cout << ans.size() << "\n";
  for (long long f : ans) cout << f << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
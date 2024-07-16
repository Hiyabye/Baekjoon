#include <iostream>
#include <vector>
using namespace std;

vector<int> precompute(void) {
  vector<int> f(44); f[0] = f[1] = 1;
  for (int i=2; i<=43; i++) {
    f[i] = f[i-1] + f[i-2];
  }
  return f;
}

void solve(vector<int> &f) {
  int n; cin >> n;

  vector<int> ans;
  for (int i=43; i>=1; i--) {
    if (n < f[i]) continue;
    n -= f[i];
    ans.push_back(f[i]);
  }

  for (int i=ans.size()-1; i>=0; i--) {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> f = precompute();

  int t; cin >> t;
  while (t--) solve(f);
  return 0;
}
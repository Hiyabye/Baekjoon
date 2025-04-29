#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void solve(int idx) {
  int n, s, p; cin >> n >> s >> p;
  vector<int> x(n+1), y(n+1);
  for (int i=0; i<=n; i++) cin >> x[i] >> y[i];

  long long ans = 0;
  for (int i=1; i<=n; i++) {
    ans += abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
  }
  cout << "Data Set " << idx << ":\n" << (ans*s+p-1)/p << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int k; cin >> k;
  for (int i=1; i<=k; i++) solve(i);
  return 0;
}
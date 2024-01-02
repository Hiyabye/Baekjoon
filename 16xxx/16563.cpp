#include <iostream>
#include <vector>
using namespace std;

vector<int> v(5000001);

void precompute(void) {
  for (int i=2; i<=5000000; i++) v[i] = i;
  for (int i=2; i<=2236; i++) {
    if (v[i] != i) continue;
    for (int j=i*i; j<=5000000; j+=i) {
      if (v[j] == j) v[j] = i;
    }
  }
}

void solve(void) {
  int k; cin >> k;
  while (k != 1) {
    cout << v[k] << " ";
    k /= v[k];
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  precompute();
  int n; cin >> n;
  while (n--) solve();
  return 0;
}
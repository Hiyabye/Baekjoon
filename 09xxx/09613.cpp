#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

void solve(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }

  long long sum = 0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      sum += gcd(a[i], a[j]);
    }
  }
  cout << sum << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
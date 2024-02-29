#include <iostream>
using namespace std;

void solve(int idx) {
  int n, d; cin >> n >> d;

  cout << "Case " << idx << ": ";
  if (n / d) cout << n / d << " ";
  if (n % d) cout << n % d << "/" << d;
  if (n / d == 0 && n % d == 0) cout << 0;
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
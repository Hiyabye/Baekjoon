#include <iostream>
using namespace std;

void solve(void) {
  long long k; cin >> k;
  long long a, b, c, d; cin >> a >> b >> c >> d;

  if (a*k+b != c*k+d) cout << "No";
  else cout << "Yes " << a*k+b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}
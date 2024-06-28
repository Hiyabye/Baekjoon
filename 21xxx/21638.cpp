#include <iostream>
using namespace std;

void solve(void) {
  int t1, v1; cin >> t1 >> v1;
  int t2, v2; cin >> t2 >> v2;

  if (t2 < 0 && v2 >= 10) cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
  else if (t2 < t1)       cout << "MCHS warns! Low temperature is expected tomorrow.";
  else if (v2 > v1)       cout << "MCHS warns! Strong wind is expected tomorrow.";
  else                    cout << "No message";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
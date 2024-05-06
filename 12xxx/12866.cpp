#include <iostream>
#include <string>
#define MOD 1000000007
using namespace std;

void solve(void) {
  int l; cin >> l;
  string s; cin >> s;

  long long a = 0, c = 0, g = 0, t = 0;
  for (int i=0; i<l; i++) {
    if (s[i] == 'A') a++;
    else if (s[i] == 'C') c++;
    else if (s[i] == 'G') g++;
    else if (s[i] == 'T') t++;
  }
  cout << a * c % MOD * g % MOD * t % MOD;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
using namespace std;

void solve(void) {
  int s, k, h; cin >> s >> k >> h;

  if (s + k + h < 100) {
    if (s < k && s < h) cout << "Soongsil";
    else if (k < s && k < h) cout << "Korea";
    else cout << "Hanyang";
  } else cout << "OK";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}
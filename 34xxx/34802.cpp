#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  string b; cin >> b;
  int t, k; cin >> t >> k;

  int s = (stoi(b.substr(0, 2)) - stoi(a.substr(0, 2))) * 3600 +
          (stoi(b.substr(3, 2)) - stoi(a.substr(3, 2))) * 60 +
          (stoi(b.substr(6, 2)) - stoi(a.substr(6, 2)));
  
  return t * (100 - k) <= s * 100;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}
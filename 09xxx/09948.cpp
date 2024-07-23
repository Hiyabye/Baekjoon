#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp = {
  {"January", 1}, {"February", 2}, {"March", 3}, {"April", 4},
  {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8},
  {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}
};

bool solve(void) {
  int a; string b; cin >> a >> b;
  if (a == 0 && b == "#") return false;

  if (mp[b] == 2 && a == 29) cout << "Unlucky";
  else if (mp[b] < 8 || (mp[b] == 8 && a < 4)) cout << "Yes";
  else if (mp[b] > 8 || (mp[b] == 8 && a > 4)) cout << "No";
  else cout << "Happy birthday";
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}
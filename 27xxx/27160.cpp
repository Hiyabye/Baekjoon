#include <iostream>
#include <map>
#include <string>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  map<string, int> mp;
  while (n--) {
    string s; int x; cin >> s >> x;
    mp[s] += x;
  }
  return mp["STRAWBERRY"] == 5 || mp["BANANA"] == 5 || mp["LIME"] == 5 || mp["PLUM"] == 5;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}
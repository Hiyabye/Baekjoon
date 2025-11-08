#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool solve(void) {
  long long b; int n, m; cin >> b >> n >> m;
  unordered_map<string, long long> mp;
  while (n--) {
    string i; long long p; cin >> i >> p;
    mp[i] = p;
  }

  while (m--) {
    string j; cin >> j;
    b -= mp[j];
  }
  return b >= 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "acceptable" : "unacceptable");
  return 0;
}
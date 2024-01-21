#include <iostream>
#include <map>
using namespace std;

int solve(void) {
  map<int, int> m;
  for (int i=0; i<5; i++) {
    int x; cin >> x;
    m[x]++;
  }

  for (auto it=m.begin(); it!=m.end(); it++) {
    if (it->second & 1) return it->first;
  }
  return -1;

}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  cout << solve();
  return 0;
}
#include <iostream>
#include <vector>
using namespace std;

bool check(const vector<int>& v) {
  for (int i=1; i<v.size()-1; i++) {
    if (v[i+1] - v[i] != v[1] - v[0]) return false;
  }
  return true;
}

void solve(void) {
  long long k; cin >> k;

  vector<int> v;
  while (k > 0) {
    v.push_back(k % 10);
    k /= 10;
  }
  cout << (check(v) ? "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" : "흥칫뿡!! <(￣ ﹌ ￣)>");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
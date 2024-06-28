#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(void) {
  int n;
  cin >> n;
  map<string, int> a;
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    if (a.find(s) == a.end()) a[s] = 1;
    else a[s]++;
  }

  int best_cnt = 0;
  string best_name;
  for (auto it=a.begin(); it!=a.end(); it++) {
    if (it->second > best_cnt) {
      best_cnt = it->second;
      best_name = it->first;
    } else if (it->second == best_cnt && it->first < best_name) {
      best_name = it->first;
    }
  }
  cout << best_name;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
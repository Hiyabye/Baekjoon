#include <iostream>
#include <map>
using namespace std;

void solve(void) {
  int n, sum = 0;
  map<int, int> m;
  for (int i=0; i<10; i++) {
    cin >> n;
    sum += n;
    if (m.find(n) == m.end()) m[n] = 1;
    else m[n]++;
  }

  cout << sum / 10 << "\n";
  int max_cnt = 0, max_num = 0;
  for (auto it=m.begin(); it!=m.end(); it++) {
    if (it->second > max_cnt) {
      max_cnt = it->second;
      max_num = it->first;
    }
  }
  cout << max_num;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
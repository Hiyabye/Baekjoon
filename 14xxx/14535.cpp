#include <iostream>
#include <map>
#include <string>
using namespace std;

map<int, string> month = {
  {1, "Jan"},  {2, "Feb"},  {3, "Mar"},  {4, "Apr"},
  {5, "May"},  {6, "Jun"},  {7, "Jul"},  {8, "Aug"},
  {9, "Sep"}, {10, "Oct"}, {11, "Nov"}, {12, "Dec"}
};

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  map<int, int> cnt;
  while (n--) {
    int d, m, y; cin >> d >> m >> y;
    cnt[m]++;
  }

  cout << "Case #" << idx << ":\n";
  for (int i=1; i<=12; i++) {
    cout << month[i] << ":";
    for (int j=0; j<cnt[i]; j++) cout << "*";
    cout << "\n";
  }

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}
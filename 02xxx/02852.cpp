#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(2880, 0);
  while (n--) {
    int x; string s; cin >> x >> s;
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    v[h*60+m] += (x == 1 ? 1 : -1);
  }

  for (int i=1; i<2880; i++) {
    v[i] += v[i-1];
  }

  int a = 0, b = 0;
  for (int i=0; i<2880; i++) {
    if (v[i] > 0) a++;
    else if (v[i] < 0) b++;
  }

  cout << fixed << setw(2) << setfill('0') << a / 60 << ":"
       << fixed << setw(2) << setfill('0') << a % 60 << "\n"
       << fixed << setw(2) << setfill('0') << b / 60 << ":"
       << fixed << setw(2) << setfill('0') << b % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
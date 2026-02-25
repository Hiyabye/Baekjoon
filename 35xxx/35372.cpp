#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, string> mp = {
  {0, "New"},
  {1, "Crescent"}, {2, "Crescent"}, {3, "Crescent"}, {4, "Crescent"},
  {5, "Quarter"}, {6, "Quarter"}, {7, "Quarter"}, {8, "Quarter"},
  {9, "Gibbous"}, {10, "Gibbous"}, {11, "Gibbous"}, {12, "Gibbous"}, {13, "Gibbous"},
  {14, "Full"},
  {15, "Gibbous"}, {16, "Gibbous"}, {17, "Gibbous"}, {18, "Gibbous"}, {19, "Gibbous"},
  {20, "Quarter"}, {21, "Quarter"}, {22, "Quarter"},
  {23, "Crescent"}, {24, "Crescent"}, {25, "Crescent"}, {26, "Crescent"}, {27, "Crescent"}
};

inline bool check(int n, const vector<string> &v, int d) {
  for (int i=0; i<n; i++) {
    if (mp[((i+1) * d) % 28] != v[i]) return false;
  }
  return true;
}

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  for (int i=1; i<=28; i++) {
    if (check(n, v, i)) {
      cout << i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
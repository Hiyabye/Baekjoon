#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> ans(6);
  for (int i=0; i<6; i++) {
    string s; getline(cin, s);
    ans[i] = s.length() - (s.back() == ' ');
  }

  cout << "Latitude " << ans[0] << ":" << ans[1] << ":" << ans[2] << "\n";
  cout << "Longitude " << ans[3] << ":" << ans[4] << ":" << ans[5];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
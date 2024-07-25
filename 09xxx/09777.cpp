#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  
  vector<int> ans(13, 0);
  while (n--) {
    int a; string b; cin >> a >> b;
    int c = b.find_first_of("/"), d = b.find_last_of("/");
    ans[stoi(b.substr(c+1, d-c-1))]++;
  }

  for (int i=1; i<=12; i++) {
    cout << i << " " << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
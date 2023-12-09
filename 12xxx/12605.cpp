#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  string s; getline(cin, s);

  string tmp = "";
  vector<string> ans;
  for (char c : s) {
    if (c == ' ') {
      ans.push_back(tmp);
      tmp = "";
    } else {
      tmp += c;
    }
  }
  ans.push_back(tmp);

  cout << "Case #" << idx << ": ";
  for (int i=ans.size()-1; i>=0; i--) {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  cin.ignore();
  for (int i=1; i<=n; i++) solve(i);
  return 0;
}
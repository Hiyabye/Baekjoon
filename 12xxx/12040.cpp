#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

string randomStr(void) {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dis(1, 26);

  vector<bool> used(26, false);
  string s = "";
  while (s.length() < 26) {
    int x = dis(gen);
    if (used[x-1]) continue;
    s += (char)('A' + x - 1);
    used[x-1] = true;
  }
  return s;
}

void solve(int idx) {
  int n; cin >> n;
  vector<string> p(n);
  for (int i=0; i<n; i++) cin >> p[i];

  cout << "Case #" << idx << ": ";
  for (int i=0; i<2000; i++) {
    string s = randomStr();
    for (int j=0; j<n; j++) {
      if (s.find(p[j]) != string::npos) {
        s = "";
        break;
      }
    }
    if (!s.empty()) {
      cout << s << "\n";
      return;
    }
  }
  cout << "IMPOSSIBLE\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
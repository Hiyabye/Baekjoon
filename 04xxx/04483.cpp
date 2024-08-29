#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  vector<pair<string, bool>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first, v[i].second = false;

  int d; cin >> d; cin.ignore();
  while (d--) {
    string s; getline(cin, s);
    stringstream ss(s); string t;
    while (ss >> t) {
      for (int i=0; i<n; i++) {
        if (v[i].first == t) {
          v[i].second = true;
        }
      }
    }
  }

  cout << "Test set " << idx << ":\n";
  for (int i=0; i<n; i++) {
    cout << v[i].first << " is " << (v[i].second ? "present" : "absent") << "\n";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}
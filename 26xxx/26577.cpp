#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; getline(cin, s);
  stringstream ss(s);
  vector<string> v; string t;
  while (ss >> t) v.push_back(t);

  for (int i=1; i<v.size(); i+=2) {
    if (v[i] == "+" || v[i] == "-") continue;
    int a = stoi(v[i-1]), b = stoi(v[i+1]);
    if (v[i] == "*") v[i-1] = to_string(a * b);
    else if (v[i] == "/") v[i-1] = to_string(a / b);
    else if (v[i] == "%") v[i-1] = to_string(a % b);
    v.erase(v.begin()+i, v.begin()+i+2); i -= 2;
  }

  for (int i=1; i<v.size(); i+=2) {
    int a = stoi(v[i-1]), b = stoi(v[i+1]);
    if (v[i] == "+") v[i-1] = to_string(a + b);
    else if (v[i] == "-") v[i-1] = to_string(a - b);
    v.erase(v.begin()+i, v.begin()+i+2); i -= 2;
  }
  cout << v[0] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n; cin.ignore();
  while (n--) solve();
  return 0;
}
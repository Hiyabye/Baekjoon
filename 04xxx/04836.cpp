#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(const string &s) {
  stringstream ss(s);
  vector<string> v; string t;
  while (ss >> t) v.push_back(t);

  vector<int> ans;
  for (int i=0; i<v.size(); i++) {
    if (v[i] != "dip") continue;
    if (i > 0 && v[i-1] == "jiggle") continue;
    if (i > 1 && v[i-2] == "jiggle") continue;
    if (i+1 < v.size() && v[i+1] == "twirl") continue;
    ans.push_back(1); v[i] = "DIP";
  }
  if (v.size() < 3 || v[v.size()-3] != "clap" || v[v.size()-2] != "stomp" || v[v.size()-1] != "clap") ans.push_back(2);
  if (s.find("twirl") != string::npos && s.find("hop") == string::npos) ans.push_back(3);
  if (s.substr(0, 6) == "jiggle") ans.push_back(4);
  if (s.find("dip") == string::npos) ans.push_back(5);

  if (ans.empty()) {
    cout << "form ok: ";
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
  } else if (ans.size() == 1) {
    cout << "form error " << ans[0] << ": ";
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
  } else if (ans.size() == 2) {
    cout << "form errors " << ans[0] << " and " << ans[1] << ": ";
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
  } else {
    cout << "form errors " << ans[0];
    for (int i=1; i<ans.size()-1; i++) cout << ", " << ans[i];
    cout << " and " << ans[ans.size()-1] << ": ";
    for (int i=0; i<v.size(); i++) cout << v[i] << " ";
  }
  cout << endl;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) solve(s);
  return 0;
}
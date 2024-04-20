#include <deque>
#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  int n; cin >> n;
  deque<string> dq;
  while (n--) {
    string s; cin >> s;
    if (s == "Present!") dq.pop_back();
    else dq.push_back(s);
  }

  if (dq.empty()) {
    cout << "No Absences";
    return;
  }

  while (!dq.empty()) {
    cout << dq.front() << "\n";
    dq.pop_front();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
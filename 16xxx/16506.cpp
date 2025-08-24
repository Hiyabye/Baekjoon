#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string, string> mp = {
  {"ADD", "00000"}, {"ADDC", "00001"}, {"SUB", "00010"}, {"SUBC", "00011"}, {"MOV", "00100"}, {"MOVC", "00101"},
  {"AND", "00110"}, {"ANDC", "00111"}, {"OR", "01000"}, {"ORC", "01001"}, {"NOT", "01010"},
  {"MULT", "01100"}, {"MULTC", "01101"}, {"LSFTL", "01110"}, {"LSFTLC", "01111"},
  {"LSFTR", "10000"}, {"LSFTRC", "10001"}, {"ASFTR", "10010"}, {"ASFTRC", "10011"},
  {"RL", "10100"}, {"RLC", "10101"}, {"RR", "10110"}, {"RRC", "10111"}
};

inline bool c(int d, int p) {
  return d & (1 << p);
}

void solve(void) {
  int n; cin >> n;

  while (n--) {
    string op; int d, a, b; cin >> op >> d >> a >> b;
    cout << mp[op] << 0 << c(d, 2) << c(d, 1) << c(d, 0);
    if (op == "MOV" || op == "MOVC" || op == "NOT") cout << "000";
    else cout << c(a, 2) << c(a, 1) << c(a, 0);
    if (op.back() != 'C') cout << c(b, 2) << c(b, 1) << c(b, 0) << 0;
    else cout << c(b, 3) << c(b, 2) << c(b, 1) << c(b, 0);
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
#include <iostream>
#include <string>

// Practice 13 · Part 2 — Tristan Daliva
// CIS 5 Week 13 · The struct your final needs

// TODO: rename this struct and its fields to fit your track.
struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  std::cout << a.name << " | Balance: " << a.balance << std::endl;
  // TODO: print every field on one line, then "\n"
}

int main() {
  Account Types[2] = {
  {"Checking", 650.00}, {"Savings", 1000.00}
  };
  
  
  
  return 0;
}

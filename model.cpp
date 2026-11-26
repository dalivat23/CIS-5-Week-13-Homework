#include <iostream>
#include <string>

// Practice 13 · Part 2 — Tristan Daliva
// CIS 5 Week 13 · The struct your final needs

// DONE: rename this struct and its fields to fit your track.
struct Account {
  std::string name;
  double balance;
};

void printAccount(const Account& a) {
  std::cout << a.name << " | Balance: " << a.balance << std::endl;
  // DONE: print every field on one line, then "\n"
}

int main() {
  const int N = 2;
  Account Types[N] = {
  {"Checking", 650.00}, {"Savings", 1000.00}
  };
  
  std::cout << "Current Accounts: " << std::endl;
  for(int i = 0; i < N; ++i)
  {
    printAccount(Types[i]);
  }  
  
  return 0;
}

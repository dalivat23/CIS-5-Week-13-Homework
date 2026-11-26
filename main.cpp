#include <iostream>
#include <string>

// Practice 13 · Part 1 — Tristan Daliva
// CIS 5 Week 13 · Word tools

std::string banner(const std::string& name) {
  // TODO: return "Hello, " + name + "!"
  return "Hello, " + name + "!";
}

std::string initials(const std::string& first, const std::string& last) {
  std::string out = "";
  // TODO: if first.size() > 0, add first[0] to out
  // TODO: if last.size() > 0, add last[0] to out
  return out;
}

int main() {
  std::string first, last;
  std::cout << "First: ";
  std::cin >> first;
  std::cout << "Last: ";
  std::cin >> last;

  std::string full = first + " " + last;
  std::cout << banner(full) << std::endl;
  
  // DONE: print banner(full)

  std::cout << "Length: " << full.size() << std::endl;
  // TODO: print "Length: " and full.size()

  
  // TODO: print "Initials: " and initials(first, last)
  return 0;
}

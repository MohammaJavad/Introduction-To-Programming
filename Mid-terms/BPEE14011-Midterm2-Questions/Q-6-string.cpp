#include <iostream>
#include <sstream>
using namespace std::cin, std::cout, std::string, std::stringstream;

int main() {
  string line;
  getline(cin, line);
  stringstream ss = stringstream(line);
  char chr[26];
  int counter = 0;
  char temp;
  for (int i = 0; ss >> temp; i++) {
    chr[i] = temp;
    counter++;
  }
}
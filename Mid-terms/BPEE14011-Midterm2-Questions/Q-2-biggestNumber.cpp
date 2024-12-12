#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool comp(int a, int b) { return a > b; }

int main() {
  string line;
  getline(cin, line);
  stringstream ss(line);
  int temp;
  bool is_here[10] = {false};
  int counter[10] = {0};
  vector<int> numbers;
  vector<int> threeMultiple;

  while (ss >> temp) {
    numbers.push_back(temp);
  }

  sort(numbers.begin(), numbers.end(), comp);

  for (int i = 0; i < 10; i++) {
    if (numbers[i] % 3 == 0) {
      threeMultiple.push_back(numbers[i]);
    }
  }

  for (int i = 0; i < threeMultiple.size(); i++) {
    for (int j = threeMultiple[i]; j > 0; j /= 10) {
      int temp = j % 10;
      is_here[temp] = true;
      counter[temp]++;
    }
  }

  for (int i = 9; i >= 0; i--) {
    if (is_here[i]) {
      for (int j = 0; j < counter[i]; j++) {
        cout << i;
      }
    }
  }
}
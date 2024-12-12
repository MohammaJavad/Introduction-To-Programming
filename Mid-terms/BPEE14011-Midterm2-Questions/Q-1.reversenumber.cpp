#include <math.h>

#include <iostream>
using namespace std;

bool is_reversed(int number) {
  int reverse = 0;
  int copyNumber = number;
  while (number) {
    reverse *= 10;
    reverse += number % 10;
    number /= 10;
  }

  if (copyNumber == reverse) {
    return true;
  }
  return false;
}
bool is_prime(int number) {
  if (number % 2 == 0) {
    return false;
  } else {
    for (int i = 3; i <= sqrt(number); i += 2) {
      if (number % i == 0) {
        return false;
      }
    }
  }
  return true;
}
int sumDigit(int number) {
  int sum = 0;
  for (int i = number; i > 0; i /= 10) {
    sum += i % 10;
  }
  return sum;
}

int main() {
  int number = 18653;
  cin >> number;
  for (int i = number + 1;; i++) {
    if (is_reversed(i) and is_prime(i) and is_prime(sumDigit(i))) {
      cout << i << " ";
      break;
    }
  }

  for (int i = number - 1;; i--) {
    if (is_reversed(i) and is_prime(i) and is_prime(sumDigit(i))) {
      cout << i << endl;
      break;
    }
  }
}
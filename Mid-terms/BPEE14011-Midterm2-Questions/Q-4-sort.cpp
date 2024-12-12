#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string line;
    getline(cin, line);
    auto ss = stringstream(line);
    vector<string> words;
    vector<string> names;
    vector<int> numbers;
    string temp;
    string answer[100];
    int sum[100];

    while (ss >> temp) {
        if (temp == "end") {
            break;
        } else {
            words.push_back(temp);
        }
    }

    for (int i = 0; i < words.size(); i++) {
        bool isNumber = true;
        for (char c : words[i]) {
            if (c < '0' || c > '9') {
                isNumber = false;
                break;
            }
        }
        if (isNumber) {
            numbers.push_back(stoi(words[i]));
        } else {
            names.push_back(words[i]);
        }
    }

    sort(names.begin(), names.end());
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " ";
    }

    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }


}

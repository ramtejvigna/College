#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    // Define the Roman numeral symbols and their values
    const pair<int, string> romanSymbols[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string result;
    for (int i = 0; i < sizeof(romanSymbols) / sizeof(romanSymbols[0]); ++i) {
        while (num >= romanSymbols[i].first) {
            result += romanSymbols[i].second;
            num -= romanSymbols[i].first;
        }
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Roman numerals are not defined for numbers less than or equal to 0." << endl;
    } else {
        string roman = intToRoman(num);
        cout << "Roman numeral: " << roman << endl;
    }

    return 0;
}

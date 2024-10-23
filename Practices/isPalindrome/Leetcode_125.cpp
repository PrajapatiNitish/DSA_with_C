#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class Solution {
    public: bool isPalindrome(string s) {
        int st = 0, end = s.size()-1;

        while(st < end) {
            while(st < end && !isalnum(s[st])) st++;
            while(st < end && !isalnum(s[end])) end--;

            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};

int main() {
    Solution solution;
    string input;

    cout << "Enter a string : ";
    getline(cin, input);

    bool result = solution.isPalindrome(input);
    if(result) {
        cout << "The string is a palindrome." << endl;
    }else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
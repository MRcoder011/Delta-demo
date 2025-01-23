#include <iostream>
using namespace std;

void findsubsequence(string str, string output, int index) {
    // Base case: if index reaches the length of the string, print the output
    if (index >= str.length()) {
        cout << "->"<<output << endl;
        return;
    }

    char ch = str[index];

    // Exclude the current character
    findsubsequence(str, output, index + 1);

    // Include the current character
    output.push_back(ch);
    findsubsequence(str, output, index + 1);
}

int main() {
    string str = "abc";
    string output = "";
    int index = 0;

    cout << "All subsequences of the string \"" << str << "\":" << endl;
    findsubsequence(str, output, index);

    return 0;
}


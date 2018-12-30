#include <iostream>
using  namespace std;
string input;
#include <vector>
vector<string> vec;


int main() {

    cout << "Please enter a string:"<<endl;
    while (cin >> input) {
        string rS;
        for (int i = 1; i <= input.length(); i++) {
            rS += input[input.length() - i];
        }
        if (input == rS) {
            vec.push_back(input);
        }
    }
    cout<<"======================================================================================================================="<<endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " Is a palindrome" << endl;
    }
}
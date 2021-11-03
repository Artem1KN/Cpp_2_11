#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int chi;
    cin >> chi;

    int counts[10] = { 0 };  

    for (int i = 0; i < s.length(); i++) {  
        char c = s[i];
        if (isdigit(c)) {
            int index = c - '0'; 
            counts[index]++;  
        }
    }

    cout << counts[chi] << endl;

    return 0;
}
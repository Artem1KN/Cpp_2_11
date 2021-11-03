#include <iostream>

using namespace std;

int main()
{
    char stroka[255] = "";
    cin >> stroka;
    int big = 0, small = 0;
    for (int i = 0; i < 255; i+=1)
    {
        if ((stroka[i] >= 'A') && (stroka[i] <= 'Z'))
            big+=1;
        if (stroka[i] >= 'a' && stroka[i] <= 'z')
            small+=1;
    }
    cout << "Big " << big << endl;
    cout << "Small " << small;
    getwchar();
    return 0;
}
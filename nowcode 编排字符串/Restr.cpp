#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main()
{
    int m;
    cin >> m;
    vector<string> ReStr;
    int n = 0;
    while (n < m) {
        string str;
        cin >> str;
        ReStr.push_back(str);
        int len = ReStr.size();
        int k = len >= 4 ? 4 : len;
 
        for (int i = 1; i <= k; i++) {
            if (i != 1) {
                cout << " ";
            }
            cout << i << "=" << ReStr[len - i];
            if (i == k) {
                cout << endl;
            }
        }
        n++;
    }
}

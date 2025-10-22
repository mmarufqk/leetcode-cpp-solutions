#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include <cstdlib>

class Solution
{
public:
    int scoreOfString(string s)
    {
        char arr[s.length() + 1];
        for (int i = 0; i < s.length(); i++)
        {
            arr[i] = s[i];
        }
        arr[s.length()] = '\0';

        int result = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            result = result + abs(arr[i] - arr[i + 1]);
        }
        return result;
    }
};

int main()
{
    string s;
    cin >> s;
    Solution sol;
    cout << sol.scoreOfString(s) << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

map<string, vector<char>> sol(vector<char>& arr)
{
    map<string, vector<char>> maparr;
    string s = "aeiou";
    
    for (auto it : arr)
    {
        if (s.find(it) != string::npos)
        {
            maparr["vowel"].push_back(it);
        }
        else
        {
            maparr["consonant"].push_back(it);
        }
    }
    return maparr;
}

int main()
{
    vector<char> arr = {'a','t','e','j','k','s','l'};
    map<string, vector<char>> ans = sol(arr);
    for (auto& it : ans)
    {
        cout << it.first << " ";
        for (auto& ele : it.second)
        {
            cout << ele << " ";
        }
        cout << "\n";
    }
    return 0;
}

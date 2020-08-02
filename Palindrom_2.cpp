// Palindrom_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPalindrom(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    if (s == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<string> PalindromFilter(vector<string> words, int minLength)
{
    vector<string> palFilter;
    for (int i = 0; i < words.size(); i++)
    {
        string rev = words[i];
        reverse(rev.begin(), rev.end());
        if (words[i].length() >= minLength && words[i] == rev)
        {
            //cout << words[i]<<" ";
            palFilter.push_back(words[i]);
        }
        else
        {
            continue;
        }
    }   
    return palFilter;
}

int main()
{
    vector<string> words = { "madam", "dert", "week", "weew", "deded" };
    int minLength=5;
    words = PalindromFilter(words, minLength);
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i];
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

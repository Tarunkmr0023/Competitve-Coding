#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<string>& crossWord, int n)
{
    for (int i = 0; i < n; i++)
        cout<<crossWord[i]<<endl;

    return;
}

vector<string> checkHorizontal(int x, int y, vector<string> crossWord, string currentWord)
{
    int n=currentWord.length();

    for(int i=0;i<n;i++)
    {
        if(crossWord[x][y + i] == '-' || crossWord[x][y + i] == currentWord[i])
        {
            crossWord[x][y + i] = currentWord[i];
        }
        else
        {
            crossWord[0][0] = '@';
            return crossWord;
        }
    }
    return crossWord;
}

vector<string> checkVertical(int x, int y,vector<string> crossWord,string currentWord)
{
    int n = currentWord.length();

    for(int i=0;i<n;i++)
    {
        if (crossWord[x + i][y] == '-' || crossWord[x + i][y] == currentWord[i])
        {
            crossWord[x + i][y] = currentWord[i];
        }
        else
        {
            crossWord[0][0] = '@';
            return crossWord;
        }
    }
    return crossWord;
}

void solvePuzzle(vector<string>& words,vector<string> crossWord ,int index, int n)
{
    if (index<words.size())
    {
        string currentWord = words[index];
        int maxLen = n - currentWord.length();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=maxLen;j++)
            {
                vector<string> temp = checkVertical(j, i,crossWord, currentWord);
                if(temp[0][0] != '@')
                {
                    solvePuzzle(words, temp, index + 1, n);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=maxLen;j++)
            {
                vector<string> temp = checkHorizontal(i, j,crossWord, currentWord);
                if (temp[0][0] != '@')
                {
                    solvePuzzle(words, temp, index + 1, n);
                }
            }
        }
    }
    else
    {
        printMatrix(crossWord,n);
        return;
    }
}

int main()
{
    int n = 10;
    vector<string> crossWord;

    string str;
    int t=n;
    while(t--)
    {
        cin>>str;
        crossWord.push_back(str);
    }

    vector<string> words;
    string s;
    cin>>s;
    int i=0;
    int j=0;
    string key="";
    while(s[i]!='\0')
    {
        if(s[i]==';')
        {
            words.push_back(key);
            key="";
            i++;
        }
        else
        {
            key.push_back(s[i]);
            i++;
        }
    }
    words.push_back(key);

    solvePuzzle(words,crossWord,0,n);
    return 0;
}
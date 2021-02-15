#include <iostream>
#include <string>
#include<cstring>
using namespace std;

string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int keypad(int num, string output[]){
    if(num==0)
    {
        output[0]="";
        return 1;
    }
    int r=num%10;
    int smallans=keypad(num/10,output);
    string temp[smallans];
    for(int i=0;i<smallans;i++)
    {
        temp[i]=output[i];
    }
    int k=0;
     string s=arr[r];
    for(int i=0;i<smallans;i++)
    {
        for(int j=0;j<s.size();j++)
        {
            output[k]=temp[i]+s[j];
            k++;
        }
    }
    return k;
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

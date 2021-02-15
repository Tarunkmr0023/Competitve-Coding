#include <iostream>
#include <string>
using namespace std;
string arr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void helper(int num,string output){
    if(num==0)
    {
        cout<<output<<endl;
        return ;
    }
    int r=num%10;
    string s=arr[r];
    for(int i=0;i<s.size();i++)
    {
        helper(num/10,s[i]+output);
    }
   return;
}

void printKeypad(int num){
    string output="";
    helper(num,output);
    return;
}



int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}

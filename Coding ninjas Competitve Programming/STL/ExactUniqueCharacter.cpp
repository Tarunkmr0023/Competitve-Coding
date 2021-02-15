#include<bits/stdc++.h>
using namespace std;
char* uniqueChar(char *str){
    
    	unordered_map<char, int> m; 
    
    	for(int i=0;str[i]!='\0';i++)
    	{
      		m[str[i]]++; 
    	}
    	int index=0;
    	for(int i=0;str[i]!='\0';i++)
    	{
        	if(m[str[i]]!=0)
        	{
            	str[index]=str[i];
            	index++;
            	m[str[i]]=0;
        	}
    	}
    	str[index]='\0';
    	return str;
}
int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}

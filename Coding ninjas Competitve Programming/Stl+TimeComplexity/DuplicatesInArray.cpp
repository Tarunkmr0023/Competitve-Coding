#include <iostream>
#include<unordered_map>
using namespace std;
int DuplicateNumber(int arr[], int size){
    unordered_map<int ,int> m;
    int ans;
   for(int i=0;i<size;i++)
   {
       m[arr[i]]++;
   }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>=2)
        {
            ans=i->first;
            return ans;
        }
    }

}

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << DuplicateNumber(input, size);	
	
	delete [] input;

	return 0;
}
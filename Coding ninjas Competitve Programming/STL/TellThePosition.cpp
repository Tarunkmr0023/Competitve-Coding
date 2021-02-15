#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int rollno;
    string sname;
    int marks;
};
bool sortbysec(student s1,student s2)
{
    if(s1.marks==s2.marks)
    {
        return s1.rollno<s2.rollno;
    }
    else
    {
        return s1.marks>s2.marks;
    }
}
int main()
{
	int n;
    cin>>n;
    vector< student > v;
  	string name;
    int m1,m2,m3,total;
    for(int i=0;i<n;i++)
    {
        cin>>name;
        cin>>m1>>m2>>m3;
        total=m1+m2+m3;
        student s;
        s.rollno=i+1;
        s.sname=name;
        s.marks=total;
        v.push_back(s);
    }
     sort(v.begin(), v.end(),sortbysec);
     for(int i=0;i<n;i++)
     {
         cout<<i+1<<" "<<v[i].sname<<endl;
     }
    return 0;

}


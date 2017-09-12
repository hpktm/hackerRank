#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int a,j,x;
    cin>>a;
   set<int>s;
    for(int i=0;i<a;i++)
    {
       cin>>j;
        if(j==1)
        {
         cin>>x;
            s.insert(x);
        }
        else if(j==2)
        {
            cin>>x;
            s.erase(x);
        }
        else if(j==3)
        {
            cin>>x;
            set<int>::iterator itr=s.find(x);
            if(itr==s.end())
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
       }
    }
    
    
}

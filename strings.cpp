/*

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively. 
In the second line print the string produced by concatenating  and  (). 
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af
Explanation

 "abcd"
 "ef"
 "abcdef"
 "ebcd"
 "af"


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    int n=a.size();
    int m=b.size();
    cout<<n<<" "<<m<<endl;
    cout<<a+b<<endl;
    cout<<b[0];
    for(int i=1;i<n;i++)
    {
        cout<<a[i];
    }
    
    cout<<" "<<a[0];
    for(int i=1;i<m;i++)
    {
        cout<<b[i];
    }
    
  
    return 0;
}



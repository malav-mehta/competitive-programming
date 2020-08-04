#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define MAX 500000
bool s[MAX]={};
vector<int> p;
int main(){
    s[0]=1;
    s[1]=1;
    p.push_back(2);
    for(int i=4;i<MAX;i+=2)
        s[i]=1;

    for(int i=3;i<MAX;i+=2)
        if(!s[i]){
            p.push_back(i);
            for(int j=i+i;j<MAX;j+=i)
                s[j]=1;
        }

    for(int n:p)
        cout<<n<<" ";
    cout<<endl<<p[10000];
    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int ans = 0;
    for (int i=999;i>=100;--i)
        for (int j=999;j>=100;--j) {
            int a=i*j, c=i*j;
            int b=0;
            while(a){
                b*=10;
                b+=a%10;
                a/=10;
            }
            cout<<c<<" "<<b<<endl;
            if(c==b){
                ans=max(ans,c);
            }
        }
    
    cout << ans;
    return 0;
}

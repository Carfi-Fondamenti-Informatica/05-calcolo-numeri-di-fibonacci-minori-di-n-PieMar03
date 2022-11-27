#include <iostream>
using namespace std;

int main(){
    int n;
    int primo=1,secondo=1;
    cin>>n;
    cout<<primo<<endl<<secondo<<endl;
    int i=3;
    while((i++<=n)&&((primo+secondo)<=n))
        {
            cout<<primo+secondo<<endl;
            if(primo<secondo)
            {
                primo=secondo+primo;
            }
            else
            {
               secondo=primo+secondo;
            }
        }
    return 0;
}

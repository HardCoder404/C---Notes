#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<((char)(64+i));
           
        }
        cout<<endl;
    }
    return 0;
}

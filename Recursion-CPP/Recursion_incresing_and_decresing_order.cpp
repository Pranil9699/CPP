#include <iostream>

using namespace std;
void decresing(int n)
{
    if(n == 1)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<"->";
    decresing(n-1);
}
void incresing(int n)
{
    if(n == 1)
    {
        cout<<n;
        return;
    }
    incresing(n-1);
    cout<<"->"<<n;
}
int main()
{
    int num;

    cout << "Enter the Number" << endl;
    cin>>num;
cout<<"Descending Order    : ";
    decresing(num);
    cout<<"Increasing Order    : ";
    incresing(num);
    return 0;
}

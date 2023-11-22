#include <iostream>

using namespace std;
int  Power(int num , int raise){
    if(raise ==0 ){
        return 1;
    }
    return num*Power(num,raise-1);
    }
int main()
{
    int number,raiseNo;
    cout<<"Enter the Number"<<endl;
    cin>>number;
    cout<<"Enter the RaiseNo"<<endl;
    cin>>raiseNo;
    cout << Power(number,raiseNo) << endl;
    return 0;
}

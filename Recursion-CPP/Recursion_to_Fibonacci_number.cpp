#include <iostream>

using namespace std;
int FibnacciNumber(int n){
if(n == 1  || n== 0){
    return n;
}
return FibnacciNumber(n-1)+FibnacciNumber(n-2);
}
int main()
{
    cout<<"Enter the Number"<<endl;
    int num;
    cin>>num;
    cout <<"Answer -> The Number is "<<num<<" And Fibnacci_number is "<<FibnacciNumber(num)<< endl;
    return 0;
}

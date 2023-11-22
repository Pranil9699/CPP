#include <iostream>

using namespace std;
bool sorted(int array[],int size)
{
    if(size==1)
        return true;
    bool restArray =sorted(array+1, size-1);
    return (array[0]<array[1] && restArray);
}
int main()
{
    cout<<"Enter the Size of the Array"<<endl;
    int num;
    cin>>num;
    int array[num];
    for(int i =0 ; i< num ; i++)
    {
        cin>>array[i];
    }
    cout << "Entered Array is " << endl;
    for(int i =0 ; i< num ; i++)
    {
        cout<<array[i]<<" ";
    }

    bool check = sorted(array,num);
    if(check == true)
    {
        cout<<"This Array will be Sorted "<<endl;
    }
    return 0;
}

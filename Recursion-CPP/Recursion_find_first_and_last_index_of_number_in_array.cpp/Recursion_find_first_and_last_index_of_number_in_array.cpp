#include <iostream>

using namespace std;
int firstposition(int array[],int size, int pos, int key)
{
    if(pos == size)
        return -1;
    if(array[pos]==key)
        return pos;
    return firstposition(array, size, pos+1, key);
}
int lastposition(int array[],int size, int pos, int key)
{
    if(pos == size )
        return -1;
    int restArray = lastposition(array, size, pos+1, key);
    if(restArray != -1)
        return restArray;
    if(array[pos]==key)
        return pos;
    return -1;
}
int main()
{
    cout<<"Enter the Lenght of The Array"<<endl;
    int num;
    cin>>num;
    int array[num];
    cout<<"Enter the Element In the Array "<<endl;
    for(int  i =0 ; i< num ; i++)
        cin>>array[i];
    for(int  i =0 ; i< num ; i++)
        cout<<array[i]<<" ";
    cout<<endl;
    cout<<"Enter Which element Position You want to check "<<endl;
    int key;
    cin>>key;
    cout<<"First position finding in "<<firstposition(array, num, 0,key);
    cout<<endl<<"Last position finding in "<<lastposition(array, num, 0, key);
    return 0;
}

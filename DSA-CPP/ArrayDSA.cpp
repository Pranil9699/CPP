// Array DSA
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
bool Insertion(int Array[], int size)
{
    cout << "Enter the Position" << endl;
    int position;
    cin >> position;
    if (size >= 100)
    {
        cout << "Array Size is Less Y Can't enter more Element" << endl;
        return false;
    }
    if (position <= size)
    {
        cout << "Enter the Element" << endl;
        int Element;
        cin >> Element;
        int i;
        for (i = size - 1; i >= position; i--)
            Array[i + 1] = Array[i];
        Array[i + 1] = Element;
        return true;
    }
    else
    {
        cout << "Position is Wrong" << endl;
        return false;
    }
}
bool Deletion(int Array[], int size)
{
    if (size == 0)
    {
        cout << "Array is Empty";
        return false;
    }
    cout << "Enter the Position" << endl;
    int position;
    cin >> position;
    if (position >= size)
    {
        cout << "Position is Not Valid" << endl;
        return false;
    }
    else
    {
        for (int i = position; i < size; i++)
        {
            Array[i] = Array[i + 1];
        }
        return true;
    }
}
void InsertionSort(int Array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = Array[i];
        int j = i - 1;
        for (; (j >= 0 && temp < Array[j]); j--)
            Array[j + 1] = Array[j];
        Array[j + 1] = temp;
    }
}
void BubbleSort(int Array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                int temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
}
void MergeCollect(int Array[], int s, int mid, int e)
{
    int MergeArray[e - s + 1];
    int idx1 = s;
    int idx2 = mid + 1;
    int x = 0;
    while (idx1 <= mid && idx2 <= e)
    {
        if (Array[idx1] <= Array[idx2])
            MergeArray[x++] = Array[idx1++];
        else
            MergeArray[x++] = Array[idx2++];
    }
    while (idx1 <= mid)
        MergeArray[x++] = Array[idx1++];
    while (idx2 <= e)
        MergeArray[x++] = Array[idx2++];
    for (int i = 0, j = s; i < x + 1; i++, j++)
        Array[j] = MergeArray[i];
}
void MargeSort(int Array[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    MargeSort(Array, s, mid);
    MargeSort(Array, mid + 1, e);
    MergeCollect(Array, s, mid, e);
}
int Partation(int Array[], int l, int h)
{
    int Pivot = Array[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (Array[j] < Pivot)
        {
            i++;
            int temp = Array[i];
            Array[i] = Array[j];
            Array[j] = temp;
        }
    }
    i++;
    int temp = Array[i];
    Array[i] = Pivot;
    Array[h] = temp;
    return i;
}
void QuickSort(int Array[], int l, int h)
{
    if (l < h)
    {
        int Pidx = Partation(Array, l, h);
        QuickSort(Array, l, Pidx - 1);
        QuickSort(Array, Pidx + 1, h);
    }
}
void SelectionSort(int Array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smallpos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (Array[smallpos] > Array[j])
            {
                smallpos = j;
            }
        }

        int temp = Array[smallpos];
        Array[smallpos] = Array[i];
        Array[i] = temp;
    }
}
void Sorting(int Array[], int size)
{
    int choice;
    cout << "Enter the Choice\n"<< endl;
    cout << "1.Insertion Sort" << endl;
    cout << "2.Bubble Sort" << endl;
    cout << "3.Marge Sort" << endl;
    cout << "4.Quick Sort" << endl;
    cout << "5.Selection Sort" << endl;
    
    cin >> choice;
    switch (choice)
    {
    case 1:
        InsertionSort(Array, size);
        break;
    case 2:
        BubbleSort(Array, size);
        break;
    case 3:
        MargeSort(Array, 0, size - 1);
        break;
    case 4:
        QuickSort(Array, 0, size - 1);
        break;
    case 5:
        SelectionSort(Array, size);
        break;
    
    default:
        cout << "Choice Wrong" << endl;
        break;
    }
}
int LinearSearch(int Array[], int size)
{
    cout << "Enter the Element To Search" << endl;
    int Element;
    cin >> Element;
    for (int i = 0; i < size; i++)
    {
        if (Element == Array[i])
        {
            return i;
        }
    }
    return -1;
}
int BinarySearch(int Array[], int size)
{
    cout << "Enter the Element To Search" << endl;
    int Element;
    cin >> Element;
    int B = 0, E = size - 1;
    while (E - B > 1)
    {
        int mid = (B + E) / 2;
        if (Element > Array[mid])
            B = mid + 1;
        else
            E = mid;
    }
    if (Array[B] == Element)
        return B;
    else if (Array[E] == Element)
        return E;
    else
        return -1;
}
int RecursiveBinarySearch(int Array[], int B, int E, int Element)
{
    if (E >= B)
    {
        int mid = B + (E - B) / 2;
        if (Array[mid] == Element)
        {
            return mid;
        }
        if (Array[mid] > Element)
        {
            return RecursiveBinarySearch(Array, B, mid - 1, Element);
        }
        return RecursiveBinarySearch(Array, mid + 1, E, Element);
    }
    return -1;
}
void Searching(int Array[], int size)
{
    int choice;
    cout << "Enter the Choice\n"
         << endl;
    cout << "1.Linear Search" << endl;
    cout << "2.Binary Search" << endl;
    cout << "3.Recursive Binary Search" << endl;
    cin >> choice;
    int Position = -1;
    switch (choice)
    {
    case 1:
        Position = LinearSearch(Array, size);
        if (Position == -1)
        {
            cout << "Element Not Found In Array" << endl;
        }
        else
        {
            cout << "Element Found At " << Position << " Position " << endl;
        }
        break;
    case 2:

        Position = BinarySearch(Array, size);
        if (Position == -1)
        {
            cout << "Element Not Found In Array" << endl;
        }
        else
        {
            cout << "Element Found At " << Position << " Position " << endl;
        }
        break;
    case 3:
        cout << " Enter the Element " << endl;
        int Element;
        cin >> Element;
        Position = RecursiveBinarySearch(Array, 0, size - 1, Element);
        if (Position == -1)
        {
            cout << "Element Not Found In Array" << endl;
        }
        else
        {
            cout << "Element Found At " << Position << " Position " << endl;
        }
        break;
    default:
        cout << "Choice Wrong" << endl;
        break;
    }
}
void DisplayArray(int Array[], int size)
{
    if (size <= 0)
    {
        cout << "Array is Empty" << endl;
        return;
    }
    cout << "Array is:";
    for (int i = 0; i < size; i++)
        cout << Array[i] << " ";
    cout << endl;
}
void getArray(int Array[], int size)
{
    for (int i = 0; i < size; i++)
        cin >> Array[i];
}
int getsize(int size)
{
    return size;
}
int main()
{
    int Array[100];
    cout << "Enter the Size of array" << endl;

    static int size;
    cin >> size;
    getArray(Array, size);

    while (1)
    {

        int choice;
        cout << "0:GetArraySize" << endl;
        cout << "1.Insertion" << endl;
        cout << "2.Deletion" << endl;
        cout << "3.Sorting" << endl;
        cout << "4.Searching" << endl;
        cout << "5.ShowArray" << endl;
        cout << "6.exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        bool check = false;
        switch (choice)
        {
        case 0:
            cout << "Array Size " << getsize(size) << endl;
            break;
        case 1:
            check = Insertion(Array, size);
            if (check == true)
            {
                size++;
            }
            else
            {
                cout << "Element Not Inserted" << endl;
            }
            break;
        case 2:
            check = Deletion(Array, size);
            if (check == true)
            {
                size--;
            }
            else
            {
                cout << "Element Not Deleted" << endl;
            }
            break;
        case 3:
            Sorting(Array, size);
            break;
        case 4:
            Searching(Array, size);
            break;
        case 5:
            DisplayArray(Array, size);
            break;
        case 6:
            exit(1);
        }
    }
    return 0;
}

/*
#include <iostream>
#include<stdlib.h>
using namespace std;
static int n;
int LinearSearch(int array[],int key)
{
    for(int i =0 ; i< n ; i++)
    {
        if(key == array[i])
            return 1+i;
    }
    return -1;
}
void Sorting(int array[] )
{
for(int i=1;i<n;i++){
    for(int j=1;j<=n-i;j++){
        if(array[j-1]>array[j]){
             int temp =array[j-1];
            array[j-1]=array[j];
            array[j]=temp;
        }
    }
}
}
int BinarySearch(int array[],int key){
int s=0;
int e=n;
for(int i=0;i<n;i++){
    int mid=(s+e)/2;
    if(array[mid]==key){
        return mid+1;

    }
    else if (array[i]>key){
        e=mid-1;

    }
    else{
        s=mid+1;
    }
}
return -1;
}
void Display(int array[])
{
    cout<<"Array is :";
    for(int i =0 ; i < n ; i++)
        cout<<array[i]<<" ";

    cout<<endl;
}
int Inserting(int array[]){
    if(n>=100)
        return -1;
int ele,pos,i;
cout<<"Enter the Element"<<endl;
cin>>ele;
cout<<"Enter the Position"<<endl;
cin>>pos;
if(pos >= n){
    cout<<"This is Not Valid position"<<endl;
    return -1;
}
else{
for( i = n-1 ; i>=pos ; i--){
    array[i+1]= array[i];
}
array[i+1]=ele;

    return 1;
}
}
int Deleting(int array[]){
int ele,pos;
cout<<"Enter the Deleting Element"<<endl;
cin>>ele;
pos=(LinearSearch(array,ele)-1);
if(pos==-1){
    return -1;
}
else{
for(int i = pos ; i<n;i++)
    array[i]=array[i+1];

    return 1;
}
}
int main()
{
    int Arr[100];
    cout << "Enter the How many Element y want To insert" << endl;
    cin>>n;
    cout<<"Enter the Element"<<endl;
    for(int i =0 ; i<n; i++)
        cin>>Arr[i];

    while(1)
    {
        int choice;
        cout<<"1.Linear Search"<<endl<<"2.Sorting Array"<<endl<<"3.Binary Search"<<endl<<"4.Display Array"<<endl<<"5.Inserting"<<endl<<"6.Deleting"<<endl<<"7.exit"<<endl<<" : ";
        cin>>choice;
        int pos,position,key;
        switch(choice)
        {
        case 1:
            cout<<"Enter Which element want"<<endl;
            cin>>key;
            position = LinearSearch(Arr,key);
            if(position==-1)
                cout<<"Element Not Found "<<endl;
            else
                cout<<"This Element Found in Position "<<position<<endl;

            break;

        case 2:
            Sorting(Arr);
            break;

        case 3:
            cout<<"Enter Which element want"<<endl;
            cin>>key;
            pos = BinarySearch(Arr,key);
            if(pos==-1)
                cout<<"Element Not Found "<<endl;
            else
                cout<<"This Element Found in Position "<<pos<<endl;
            break;

        case 4:
            Display(Arr);
            break;
        case 5 :
           pos = Inserting(Arr);
            if(pos==-1)
                cout<<"Element Not Insert "<<endl;
            else
                cout<<"Element is Insert "<<endl;
                n++;
            break;
        case 6:
          pos = Deleting(Arr);
            if(pos==-1)
                cout<<"Element Not Delete "<<endl;
            else
                cout<<"Element is delete "<<endl;
                n--;
            break;
        case 7:
            exit(1);

        default:
            cout<<"Wrong Choice"<<endl;

        }
    }
    return 0;
}
*/

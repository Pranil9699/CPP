#include <iostream>

using namespace std;

void * larger(void * dataptr1,  void * dataptr2 , int (*ptrtoCompFunc) (void *, void *)){
if((*ptrtoCompFunc) (dataptr1,dataptr2)>0)
    return dataptr1;
    else
        return dataptr2;
}
int compare(void *ptr1, void *ptr2){
if(*(int*)ptr1 >= *(int*)ptr2)
    return 1;
    else
        return -1;
}
int main()
{
    int num1, num2,big;
    cout << "Enter the Two Number" << endl;
    cin>>num1>>num2;
    big = (*(int*) larger(&num1 , &num2 , compare));
    cout<< "The Largest Number is " << big<<endl;
    return 0;
}

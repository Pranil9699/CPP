#include<string.h> 
#include<iostream> 
#include<cmath> 
#include<algorithm> 
using namespace std; 
int counting( int value) 
{ 
    int count=0; 
    while(value) 
    { 
        if(value%2==0) 
            value=value/2; 
        else 
            value = value -1; 
        count++; 
    } 
    return count; 
} 
int main() 
{ 
    char string_1[100] ; 
    int len; 
    cout<<"Enter the String " ; 
    cin>>string_1; 
    cout<<"String is ="<<string_1; 
    len=strlen(string_1); 
    cout<<"\nString lenght is "<<len<<endl; 
    int i =0; 
    cout<<"We are putting the data in the int array"<<endl; 
    int array[len]; 
    for(int i =0 ; i<len; i++) 
    { 
        if(string_1[i]=='1') 
            array[i]=1; 
        else if(string_1[i]=='0') 
            array[i]=0; 
        else 
            exit(0); 
    } 
    for(int i =0 ; i<len; i++) 
        cout<<array[i]; 
    len = sizeof(array)/sizeof(array[0]); 
//reverse the Array elements 
    reverse(array,array+len); 
    int decimal=0; 
    for(int i =len-1 ; i>=0 ; i-- ) 
    { 
        decimal += array[i]*pow(2,i); 
    } 
    cout<<endl<<"decimal value is "<<decimal; 
    cout<<"\nAnswer is "<<counting(decimal); 
    return 0;
    }

#include <iostream>
#include<string.h>
//#include<algorithm>
using namespace std;

int main()
{
    char string_1[100];
    cout << "Enter the String" << endl;
    cin>>string_1;
    cout<<"The String is : "<<string_1<<endl;
    int freq[26];
    for(int i =0 ; i<26 ; i++){
        freq[i]=0;
    }
    int length= strlen(string_1);
    for(int i=0 ; i<length; i++){
        freq[string_1[i]-'a']++;
    }
    for(int i =0 ; i< 26;++i){
            for(int j =i+1 ; j< 26;++j){
        if(freq[i]<freq[j]){
            int temp= freq[i];
            freq[i]=freq[j];
            freq[j]=temp;
        }
    }
    }
    cout<<"Result   : ";
    for(int i =0 ; i<26 ; i++){
            if(freq[i]!=0)
       cout<<freq[i]<<" ";
    }
    return 0;
}
/* output of the Program
Enter the String
tuuohjmfhdrfgb
The String is : tuuohjmfhdrfgb
Result   : 2 2 2 1 1 1 1 1 1 1 1
*/

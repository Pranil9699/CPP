#include <iostream>
using namespace std;
void primeFactor(int num){
    int spf[100]={0};
for(int i =0 ; i<= num ; i++){
    spf[i]= i;

}

for(int i =2 ; i<= num ; i++){
if(spf[i]==i){
    for(int j =i*i ; j<= num; j+=i){
        if(spf[j]==j){
            spf[j]= i;
            cout<<"spf["<<j<<"] = "<<i<<endl;
        }
    }
}
}
cout<<"The Number is "<<num <<" And Factor of this Number are :";
while(num!=1){
    cout<<spf[num]<<" * ";
    num=num/spf[num];
}

}
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    primeFactor(num);

    return 0;
}

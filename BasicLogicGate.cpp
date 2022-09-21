#include <iostream>
using namespace std;
void AND(){
reverse_position:
  cout<<"AND Gate"<<endl;
    int a,b,c;

    cout<<"Enter First input"<<endl;
    cin>>a;
    cout<<"Enter Second input"<<endl;
    cin>>b;
     if((a==1 || a==0) &&(b==1 || b==0)){
            cout<<"The  First input "<<a<<" And Second input "<<b<<endl;
    c = a & b;
    cout<<"The Output Is "<<c<<endl;
    }
    else{
        cout<<"Enter Number only 1 or 0 accepted"<<endl;
        cout<<"Try Again"<<endl;
      goto reverse_position;
    }
}
void OR(){
reverse_position:
  cout<<"OR Gate "<<endl;
    int a,b,c;

    cout<<"Enter First input"<<endl;
    cin>>a;
    cout<<"Enter Second input"<<endl;
    cin>>b;
     if((a==1 || a==0) &&(b==1 || b==0)){
            cout<<"The  First input "<<a<<" And Second input "<<b<<endl;
    c = a | b;
     cout<<"The Output Is "<<c<<endl;
    }
 else{
        cout<<"Enter Number only 1 or 0 accepted"<<endl;
        cout<<"Try Again"<<endl;
      goto reverse_position;
    }
}
void NOT(){
    reverse_position:
cout<<"NOT Gate"<<endl;
    int a,c;
    cout<<"Enter One input"<<endl;
    cin>>a;
    c = !a;
         if((a==1 || a==0)){
                cout<<"Input is "<<a<<endl;
    cout<<"The Output Is"<<c<<endl;
    } else{
        cout<<"Enter Number only 1 or 0 accepted"<<endl;
        cout<<"Try Again"<<endl;
      goto reverse_position;
    }
}
int main()
{
  while(1){

    int choose;
    cout <<endl<<endl<< "1 -  AND Gate" << endl<< "2 -  OR Gate" << endl<< "3 -  NOT Gate" << endl<< "4 -  Exit" << endl;
    cin>>choose;
    switch(choose){
    case 1:
        AND();
    break;
    case 2:
        OR();
    break;
    case 3:
        NOT();
    break;
    case 4:
        exit(1);
    default :
    cout<<"Choose Correct Option"<<endl;
    }
    }
    return 0;
}

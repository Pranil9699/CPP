#include <iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    cout<<"Enter how many student in the Class   :  ";
    cin>>num;
    string subject[]= {"English", "Maths","Science", "SocialScience"};
//    string name[num];
//    static  int marks[5][4];
    string name[]= {"Sujit","Pritam","Chintu","Pranil","Nandini"};
    int marks[5][4]= {
                      90,91,92,88,
                      94,92,90,97,
                      96,79,93,90,
                      90,94,48,91,
                      93,93,98,80
                     };
//    for(int i =0 ; i< num; i++)
//    {
//        cout<<"Enter the "<<i+1<<" Student Name : ";
//        cin>>name[i];
//        for(int j =0 ; j<4 ; j++)
//        {
//            cout<<subject[j]<< " ";
//            cin>>marks[i][j];
//        }
//    }
    cout<<endl;
    static  int max[4];
    int sum[num];
    cout<<"      "<<subject[0]<<" "<<subject[1]<<" "<<subject[2]<<" "<<subject[3]<<" SUM ";
    for(int i =0 ; i< num; i++)
    {
        sum[i]=0;
        cout<<endl<<name[i];
        for(int j =0 ; j<4 ; j++)
        {
            cout<<"\t"<<marks[i][j];
            sum[i] += marks[i][j];
        }
        cout<<"\t  "<<sum[i];
    }
    string Sub_topper;
    int max1=0;
    for(int i =0 ; i< num; i++)
    {
        if(sum[i]>max1)
        {
            max1=sum[i];
            Sub_topper = name[i];
        }
    }
    cout<<endl;
    string Domi_name[4];

for(int i =0 ; i< num; i++)
{
    if(marks[i][0]>max[0])
    {
        max[0]=marks[i][0];
        Domi_name[0]=name[i];
    }
    if(marks[i][1]>max[1])
    {
        max[1]=marks[i][1];
        Domi_name[1]=name[i];
    }
    if(marks[i][2]>max[2])
    {
        max[2]=marks[i][2];
        Domi_name[2]=name[i];
    }
    if(marks[i][3]>max[3])
    {
        max[3]=marks[i][3];
        Domi_name[3]=name[i];
    }
}
cout<<"English Topper   ----->   "<<Domi_name[0]<<endl;
cout<<"Maths Topper   ----->   "<<Domi_name[1]<<endl;
cout<<"Science Topper   ----->   "<<Domi_name[2]<<endl;
cout<<"SocialScience Topper   ----->   "<<Domi_name[3]<<endl;
cout<<"------------------------------------------------------------\nClass  Topper -----> "<<Sub_topper <<endl;
    return 0;
}

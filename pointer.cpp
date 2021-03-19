#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of student: "<<endl;
    cin>>n;

    int *mark = new int[n];
    cout<<"Enter student mark:- "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>*(mark+i);
    } 

    for(int i=0; i<n; i++)
    {
        sum=sum+*(mark+i);
    }

    cout<<"sum :- "<<sum<<endl;

    cout<<"the mark value: "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<*(mark+i)<<endl;
        
    }

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
	struct student
	{
		char name[50];
   		int id_no;
   		char department[100];
  		char section;
	}z;
    
    cout<<"Enter Full Name: ";
    cin>>z.name;
    cout<<"Enter Id Number: ";
    cin>>z.id_no;
    cout<<"Enter Department: ";
    cin>>z.department;
    cout<<"Enter Section: ";
    cin>>z.section;

    cout<<"\nDisplaying Information."<<endl;
    cout<<"Name: "<<z.name<<endl;
    cout<<"Id Number: "<<z.id_no<<endl;
    cout<<"Department: "<<z.department<<endl;
    cout<<"Section: "<<z.section<<endl;

    return 0;
}


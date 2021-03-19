#include<iostream>
using namespace std; 

	//global declaration
	int n=3;
	// Function declaration
	void starline();

	// The main method
	int main()
	{	
		// the body of the function
		starline();
		cout<<"\n it is the function body"<<endl;
		starline();

		return 0;
	}

	// Function definition
	void starline()
	{
		for(int i=0; i<n; i++)
    	{
        	cout<<"*";
    	}
    }

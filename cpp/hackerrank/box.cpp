#include<bits/stdc++.h>
using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
class Box{

	
	
	int l,b,h;
	public:
	Box(){

	}
	Box(int l,int b,int h){
		this->l = l;
		this->b = b;
		this->h = h;
	}
	Box(Box &b){
		this->l = b.l;
		this->b = b.b;
		this->h = b.h;
	}

	void setLength(int l){
		this->l = l;
	}
	void setBread(int b){
		this->b = b;
	}
	void setHeight(int h){
		this->h = h;
	}


	int getLength(int l){
		return this->l;
	}
	int getBread(int b){
		return this->b;
	}
	int getHeight(int h){
		return this->h;
	}
};


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}


int main()
{
	check2();
}
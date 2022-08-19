#include<iostream>


using namespace std;


class Student {

private : 

	int roll;
	string name;
	int mathmarks;
	int physmarks;
	int chemmarks;

public:

	Student(int r,string n,int m,int p, int c)
	{
		roll = r;
		name = n;
		mathmarks = m;
		physmarks = p;
		chemmarks = c;
	}

	int total()
	{
		return mathmarks+physmarks+chemmarks;
	}

	char grade()
	{
		float average = total()/3;

		if (average > 60)
			return 'A';
		else if (average > 40 && average < 60)
			return 'B';
		else 
			return 'C';

	}

};


int main(int argc, char const *argv[])
{

	int roll,mathmarks,physmarks,chemmarks;
	string name;

	cout << "Enter the roll no. :";
	cin >> roll;
	cout << "Enter the name : ";
	cin >> name;
	cout << "Enter Marks in three subject : ";
	cin >> mathmarks >> physmarks >> chemmarks;

	Student Shubham (roll,name,mathmarks,physmarks,chemmarks);
	
	cout << "Total Marks : " << Shubham.total() << endl;
	cout << "Grade : " << Shubham.grade() << endl;	

return 0;
}

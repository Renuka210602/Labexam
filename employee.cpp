#include<iostream>
using namespace std;
class Employee
{
	private:
		int emp_id;
		string emp_name;
		float b_salary,HRA,DA,g_salary;
	public:
		void accept()
		{
			cout<<"\n-------------Enter Employee Details--------------";
			cout<<"\nEnter Employee Id: ";
			cin>>emp_id;
			cout<<"\nEnter Employee Name: ";
			cin>>emp_name;
			cout<<"\nEnter Basic Salary: ";
			cin>>b_salary;
		}
		void cal()
		{
			DA=0.12*b_salary;
			HRA=0.3*b_salary;
			g_salary=b_salary+DA+HRA;	
		}	
		void display()
		{
			cout<<"\n-----------------Employee Details-------------------";
			cout<<"\nEmployee Id: "<<emp_id;
			cout<<"\nEmployee Name: "<<emp_name;
			cout<<"\nBasic Salary of Employee: "<<b_salary;
			cout<<"\nHRA of Employee: "<<HRA;
			cout<<"\nDA of Employee: "<<DA;
			cout<<"\nGross of Employee: "<<g_salary;
		}
};
main()
{
	Employee e;
	e.accept();
	e.cal();
	e.display();
}
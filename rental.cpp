#include<iostream>
using namespace std;
class Person
{
	private:
		int id;
		string name;
	public:
		Person()
		{
		}
		Person(int id, string name)
		{
			this->id=id;
			this->name=name;
		}
};
class Customer:public Person
{
	private:
		int c_id;
		string c_name;
	public:
		Customer()
		{
		}
		Customer(int c_id,string c_name):Person(id,name)
		{
			cout<<"\nEnter Person id: ";
			cin>>id;
			cout<<"\nPerson Id: "<<id;
			cout<<"\nEnter Person name: ";
			cin>>name;
			cout<<"\nPerson Name: "<<name;
			cout<<"\nCustomer Id: "<<id;
			cout<<"\nCustomer Name: "<<name;	
		}
};
class Vehicle
{
	private:
		int v_id;
		string v_type;
		int rentperday;
		int availablecount;
	public:
		Vehicle()
		{
		}
		Vehicle(int v_id,string v_type,int rentperday,int availablecount)
		{
			this->v_id=v_id;
			this->v_type=v_type;
			this->rentperday=rentperday;
			availablecount=0;
			cout<<"\nEnter Vehicle Id: ";
			cin>>v_id;
			cout<<"\nEnter vehicle type: ";
			cin>>v_type;
			cout<<"\nEnter rent per day: ";
			cin>>rentperday;
		}
		void displayVehicle()
		{
			cout<<"\n-------------------Displaying Vehicle Details---------------------";
			cout<<"\nVehicle Id: "<<v_id;
			cout<<"\nVehicle type: "<<v_type;
			cout<<"\nRent Per Day: "<<rentperday;
			cout<<"\nNumber of available vehicle: "<<availablecount;
		}
		void manage()
		{
			availablecount++;
			cout<<"\nDisplay Available count of vehicle: "<<availablecount;
		}
		
};
class Rental : public RentalService {
public:
   
    void rent_vehicles(int id, int nod) {
        int index = findById(id);
        if (index != -1 && book_vehicle(id)) {
            cout << "\nRented Vehicle Successfully!!";
            cout << "\n----------------------Rental Details------------------------";
            v[index].display_vehicle();
            calculate_rent(id, day);
        } else {
            cout << "\nVehicle Not Available";
        }
    }

    
    void calculate_rent(int id, int nod) {
        int index = findById(id);
        if (index != -1) {
            cout << "\nTotal Rent Of " << this->v[index].type << " for " << nod << " days is: " << this->v[index].rpd * nod;
        }
    }

   
    void display_rentals() {
        cout << "\n----------------------Rented Vehicles------------------------";
        for (int i = 0; i < vc; i++) {
            if (v[i].ac == false) {  
                v[i].display_vehicle();
            }
        }
    }
};
main()
{ 
	Customer c;
	c.Person(id,name);
	
	Rental r;
	r.addVehicle();
	r.displayVehicle();
	r.display();	
}
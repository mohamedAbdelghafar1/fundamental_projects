#include <iostream>
using namespace std;
class abstractCar
{
	virtual void Ask_for_the_Model() = 0;
};

class Car : abstractCar
{
protected:
	string model;
	int price;
	string user;
public:
	Car(int Price, string Model, string User)
	{
		price = Price;
		model = Model;
		user = User;
	}
	void Introduce_The_Costomer()
	{
		cout << "costomer Name is : " << user << "\n"
			<< "car's price is: " << price << "\n"
			<< "car's model is : " << model << "\n";
	}
	
	void Ask_for_the_Model()
	{
		if (price >= 50000)
		{
			cout << user << " you can get MARCIDES or Tesla \n";
			
		}
		else
		{
			cout <<"Mr "<< user << ",sorry you can get KIA \n";
		}
	}
};

	class Fuel: public	Car
	{
	protected:
	string Fuel_Type;
public:
	Fuel(int Price, string Model, string User,string fuel_Type) : Car (Price,Model,User) 
	{
		Fuel_Type=fuel_Type;
	}
	
	};
	class Speed :public Car 
	{
	int $peed;
		public:
	Speed(int Price, string Model, string User,int speed): Car (Price,Model,User)
	{
		$peed=speed;
	}
	void Show_Speed()
	{
		cout<<"your car "<< model << ",s speed is "<<$peed<<" Km/h\n";
	}


	};
int main()
{
	Fuel tesla=Fuel(4000000,"Tesla","Mr Adam","Electric Energy");
	tesla.Ask_for_the_Model();
	Speed car_1=Speed(900000,"KIA","Omar",250);
	car_1.Show_Speed();
	cout<<"\n************************\n";
	Speed car_2=Speed(500000,"Tesla","Mohamed",500);
	car_2.Ask_for_the_Model();
	car_2.Show_Speed();

	return 0;
}
#include <iostream>
using namespace std;

class Pizza
{
private:
    void makebase()
    {
        cout << "make pizza " << getPizzaName() << endl;
    }
    void addtoppings()
    {
        cout << "make toppings " << getPizzaName() << endl;
    }
    void bakePizza()
    {
        cout << "bake pizza" << getPizzaName() << endl;
    }

protected:
    virtual const char* getPizzaName() = 0;

public:
    void makePizza()
    {
        makebase();
        addtoppings();
        bakePizza();
    }
};
    class Chicken :public Pizza{
        protected:
        virtual const char* getPizzaName(){
            return "Chicken";
        }
    };
    class kerispi :public Pizza{
        protected:
        virtual const char* getPizzaName(){
            return "kirispi";
        }
    };
    class Beef :public Pizza{
        protected:
        virtual const char* getPizzaName()
        {
            return "Beef ";
        }
    };
    class Chesse :public Pizza{
    protected:
        virtual const char* getPizzaName()
        {
            return "Chesse";
        }
    };
    void BuyPizza(Pizza *pizza)
    {
        pizza->makePizza();
    }
int main()
{
    cout<<"chose the type of the pizza "<<endl;
    cout<< "1- for chicken Pizza :"<<endl;
    cout<< "2- for Beef Pizza :"<<endl;
    cout<< "3- for Cheese Pizza :"<<endl;
    cout<< "4- for Cheese Kirispi :"<<endl;
    int choice;
    cin>>choice;
    Pizza *pizza=NULL;
    switch (choice)
    {
        case 1:
            pizza = new Chicken;
            break;
        case 2:
            pizza = new Beef;
            break;
        case 3:
            pizza = new Chesse;
            break;
        case 4:
            pizza = new kerispi;
            break;
        default:
        cout<<"invalid chouse !";
        
    }
    if(pizza){
        BuyPizza(pizza);
        delete pizza;
    }
    return 0;
}
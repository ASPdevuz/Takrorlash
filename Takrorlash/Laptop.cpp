#include<iostream>
#include<string> //kutubxona

using namespace std; //namespace

class Laptop { //class
public: //modifikator
	string Brand; //property
	string OZU;
	double Price;
	string Window;

	//default constructor
	Laptop() {
		Brand = "Acer";
		OZU = 8;
		Price = 500;
		Window = "17 inc";
	}

	//constructor
	Laptop(string brand, string ozu, double price, string window) {
		Brand = brand;
		OZU = ozu;
		Price = price;
		Window = window;
	}

	void GetLaptop()
	{
		cout << "output: " << Brand << OZU << to_string(Price) << Window << endl;
	} 
};
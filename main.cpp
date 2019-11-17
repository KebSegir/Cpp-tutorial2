#include "header.hpp"

int main() {
	double number1 = 0.0;
	double number2 = 0.0;

	int menu = 0;
	char menuItem = '+';

	int counter = 1;
	
	do{
		cout << "Cpp Tutorial 1 by TheCabbar!\n" << endl;
		cout << "--------------"<< counter <<"-------------\n" << endl;
		
		cout << "Enter the menu number of the arithmetic operation:\n"
				"1 - Addition\n"
				"2 - Subtraction\n"
				"3 - Multiplication\n"
				"4 - Division\n"
				"0 - Exit\n"			
				"Option: ";
		cin >> menu;
		
		if(menu == 0)
			break;

		cout << "Enter the first number: ";
		cin >> number1;

		cout << "Enter the second number: ";
		cin >> number2;
		
		switch(menu){
			case 1:
				menuItem = '+';
				break;
			case 2:
				menuItem = '-';
				break;
			case 3:
				menuItem = '*';
				break;
			case 4:
				menuItem = '/';
				break;
		}

		if(menuItem == '+'){
			cout << "Addition of " << number1 << " and " << number2 << " is " << addition(number1, number2) << ".\n" << endl;
		}
		else if(menuItem == '-'){
			cout << "Subtraction of " << number1 << " and " << number2 << " is " << subtraction(number1, number2) << ".\n" << endl;
		}
		else if(menuItem == '*'){
			cout << "Multiplication of " << number1 << " and " << number2 << " is " << multiplication(number1, number2) << ".\n" << endl;
		}
		else{
			cout << "Division of " << number1 << " and " << number2 << " is " << division(number1, number2) << ".\n" << endl;
		}	
		counter++;
	}while(menu != 0);

	return 0;
}


///// FUNCTIONS /////

double addition(double a, double b){
	return a + b;
}
double subtraction(double a, double b){
	return a - b;
}
double multiplication(double a, double b){
	return a * b;
}
double division(double a, double b){
	return a / b;
}
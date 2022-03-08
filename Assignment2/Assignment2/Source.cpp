#include <iostream>
#include <cmath>
using namespace std;

float height;
float weight;
float bmi;

void bmiCalc() {
	cout << "Enter your height in inches" << endl;
	cin >> height;
	cout << "Enter your weight in pounds" << endl;
	cin >> weight;

	weight = weight * 0.45;
	height = height * 0.025;
	height = height * height;

	bmi = weight / height;

	cout << "Your BMI is: "; cout << bmi; cout << endl;

	if (bmi <=18.5) {
		cout << "You are underweight" << endl;
	}
	else if (bmi <= 24.9) {
		cout << "You are healthy" << endl;
	}
	else if (bmi <= 29.9) {
		cout << "You are over weight" << endl;
	}

	else {
		cout << "You are obese" << endl;
	}
}

void menu() {

	cout << "Hello user! Select the function you would like to use." << endl;
	cout << "1. Body Mass Index Calculator" << endl;
	cout << "2. EXIT" << endl;
	int userSelect;
	cin >> userSelect;


	switch (userSelect) {
	case 1:
		bmiCalc();
		break;


	case 2:
		exit;
		break;

	default:
		menu();
		break;
	}

	
}

int main(){

	menu();
}
	




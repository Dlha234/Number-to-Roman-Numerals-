// Delbert Lynn Harrison
// CS 215 - Section 005
// Delbert.Harrison@uky.edu
// Program 1
// Purpose: Create a program to convert numbers to Roman Numerals
// Pre-conditions: User has number to input
// Post-conditions: User input is converted to Roman Numeral accordingly

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	int num; //Initialize integer 
	string Roman_Numeral; //Initialize string
	Roman_Numeral = "";
	cout <<"Integer--Roman Number conversion Tool\n "; //Tell user tool
	cout <<"Please enter -1 to quit program\n";//Tell user to input -1 to stop
	cin>> num;
	while(num == -1)// If user inputs -1, stop program and tell them thank you
	{
    cout <<"Thank you for using Integer--Roman Number conversion Tool.";
    cin>> num;
	}
    while(num <= 0 || num >= 4000)//Range set
	{
		cout <<" Your number must be greater than zero and less than 4000\n"; //If user inputs out of range, tell user 
		cin>> num;
	}

        while(num > -1)
        {
		while(num >= 1000)//Set M
		{
			num = num - 1000;
			Roman_Numeral += 'M';
		}
		if(num >= 900 && num <= 999)//Special case CM
        {
            num = num - 900;
            Roman_Numeral += "CM";
        }
        while(num >= 500)//Set D
        {
         num = num - 500;
         Roman_Numeral += 'D';
        }
		if(num >= 400 && num <= 499)//Special case CD
		{
			num = num - 400;
			Roman_Numeral += "CD";
		}
		while(num >= 100)//Set C
		{
			num = num - 100;
			Roman_Numeral += 'C';
		}
		if(num >= 90 && num <= 99)//Special case XC
        {
            num = num - 90;
            Roman_Numeral += "XC";
        }
		while(num >= 50)//Set L
		{
			num = num - 50;
			Roman_Numeral += 'L';
		}
		if(num >= 40 && num <= 49)//Special case XL
		{
			num = num - 40;
			Roman_Numeral += "XL";
		}
		while(num >= 10)//Set X
		{
			num = num - 10;
			Roman_Numeral += 'X';
		}
		if(num ==9)//Special case XI
        {
            num = num - 9;
            Roman_Numeral += "XI";
        }
        if(num >= 5)//Set V
        {
            num = num - 5;
            Roman_Numeral += 'V';
        }

		if(num == 4)//Special case IV
		{
		    num = num - 4;
			Roman_Numeral += "IV";
		}
		while(num >= 1)//Set I
		{
			num = num - 1;
			Roman_Numeral += 'I';
		}
		cout<< Roman_Numeral <<endl; //Print out Roman Numeral
		Roman_Numeral = ""; //Set empty string again
		cin >> num; //Gain input
		while((num <= 0 || num >= 4000) && num != -1)//Range conditions 
        {
		cout <<" Your number must be greater than zero and less than 4000\n";
		cin>> num;
	    }
	    if(num == -1)
        {
            cout<<"Thank you for using Integer--Roman Number conversion Tool.";
        }

	}
	system("pause");//Pause system
	return 0;
}
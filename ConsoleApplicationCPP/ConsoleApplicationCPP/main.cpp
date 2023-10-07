#include<iostream>
#include<map>
#include<string>
#include<iomanip>
#include<vector>
#include<fstream>
#pragma warning(disable : 4996)
using namespace std;
#include"Applier.h"
#include"Company.h"


void main()
{

	Applier* cv1 = new Applier("Ceyhun", 18, "IT", "Empty1");
	Applier* cv2 = new Applier("Sebine", 17, "Designer", "Empty2");


	Company company;
	 company.hireUp(cv1);
	 company.hireUp(cv2);
	 
	 company.writeToFile("company.txt");


	company.readToFile("company.txt");
	company.showAllCV();

}
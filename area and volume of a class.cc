/*
Name:
Reg No:
Date:
Version
Description:c++ classes and object 
*/
#include <iostream>
using namespace std;

class Room
{
	public:
	float length,breadth,height; 
	
	double calculate_area(){
		return  length * breadth;
	}
	
	double calculate_vol(){
		return length*breadth*height;
	}
};
int main(){
	//object 
	Room room1;
	float area,volume;
	
	room1.length=20;
	room1.breadth=30;
	room1.height=40;
	area = room1.calculate_area();   
    volume = room1.calculate_vol();
	
	cout<<"The area is"<<area<<endl;
	cout<<"The volume is"<<volume<<endl;
	
	return 0;
};

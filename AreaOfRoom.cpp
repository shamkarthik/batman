//A program to display the area of room in square feet
#include <iostream>

using namespace std;

int main()
{
	int room_width;
	cout << "Enter the width of the room:";
	cin >> room_width;
	
	int room_length;
	cout << "Enter the length of the room:";
	cin >> room_length;
	
	cout << "The width of the room is " << room_width * room_length << " square feet.";
	
	return 0;
} 

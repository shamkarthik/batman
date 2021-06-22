#include <iostream>

using namespace std;

int main()
{
	cout << "Welcome to frank cleaning service"<<endl;
	cout << "\nRequired the number of small & large rooms"<<endl;
	
	int small_rooms{0};
	cout << "\nNumber of small rooms needed to clean: ";
	cin >> small_rooms;
	
	int large_rooms{0};
	cout << "Number of large rooms needed to clean: ";
	cin >> large_rooms;
	cin >> large_rooms;
	
	const double cost_per_small_room{25};
	const double cost_per_large_room{35};
	const double tax{0.06};
	const double estimated_days{30}; 
	
	cout << "\nEstimate for cleaning service:" << endl;
	cout << "____________________________________________________" <<endl;
	cout << "Number of rooms needed to clean: " << small_rooms+large_rooms <<endl;
	cout << endl;
	cout << "Cost           :$" << (cost_per_small_room * small_rooms)+(cost_per_large_room * large_rooms) << endl;
	cout << "Tax            :$" << ((cost_per_small_room * small_rooms)+(cost_per_large_room * large_rooms)) * tax<< endl;
	cout << "_____________________________________________________"<<endl;
	cout << "Total estimated:$"<< (cost_per_small_room * small_rooms)+(cost_per_large_room * large_rooms) + 
			 ((cost_per_small_room * small_rooms)+(cost_per_large_room * large_rooms)) * tax<<endl;
	cout << endl;
	cout << "\"This estimated valid for only " << estimated_days << " days\""<<endl;
	
	return 0 ;
}

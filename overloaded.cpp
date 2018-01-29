#include <iostream>
#include "point.h"
using namespace std;

int main(){
	point p1(10, 20), p2(10,40);
	cout <<"\nEnter the coordinates of p1 :";
	cin >>p1;
	cout <<"\nEnter the coordinates of p2 :";
	cin >>p2;
	point p3 = p1 + p2;// point p3 = operator+(p1,p2)
	cout<<p1<<p2<<p3;
	/*cout<<p2; //operator<<(cout, p2)
	cout<<p3;
*/
	/*cout << "("<< p1.get_x()<<", "<<p1.get_y()<<")"<<endl;
	cout << "("<< p2.get_x()<<", "<<p2.get_y()<<")"<<endl;
	cout << "("<< p3.get_x()<<", "<<p3.get_y()<<")"<<endl;
	*/
	if (p1 == p2) { // operator==(p1, p2)
		cout<<"Points are equal"<<endl;
	}

	return 0;
}

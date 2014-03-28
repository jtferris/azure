#include <iostream>
#include <cmath>

using namespace std;

typedef struct{
	int x;
	int y;
}point;

double distance(point a, point b);

int main() {

	point a;
	a.x = 5;
	a.y = 5;

	point b;
	b.x = 1;
	b.y = 1;

	cout << distance(a,b) << endl;

	return 0;
}

double distance(point a, point b) {
	
	double distance;
	distance = sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));

	return distance;
}
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    double area = 3.141596 * pow(radius, 2);
    cout << "Area: " << area << endl;
    return 0;
}
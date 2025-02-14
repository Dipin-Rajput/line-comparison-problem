# include <iostream>
# include <cmath>
using namespace std;

class LineComparison{

    double x1, y1, x2, y2;

public:

    LineComparison(double x1, double y1, double x2, double y2){ // Constructor for user input coordinates

        this->x1 =x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }

    double calculateLength(){ // function to calculate the length of line

        double length;

        double x = x2 - x1;
        double y = y2 - y1;

        length = sqrt((x*x) + (y*y));

        return length;
    }
};

int main(){

    cout << "\n-------------------- Welcome to Line Comparison Computation Program --------------------\n";

    double x1, y1, x2, y2, length1, length2;

    cout << "\nEnter coordinates for Line 1\n\n";

    // User input for line 1

    cout << "Enter coordinates for x1: ";
    cin >> x1;
    cout << "Enter coordinates for y1: ";
    cin >> y1;
    cout << "Enter coordinates for x2: ";
    cin >> x2;
    cout << "Enter coordinates for y2: ";
    cin >> y2;

    LineComparison Line1(x1, y1, x2, y2); // line 1 object for LineComparison class

    length1 = Line1.calculateLength(); // Calculate length for line 1

    // User input for line 2

    cout << "\nEnter coordinates for Line 2\n\n";

    cout << "Enter coordinates for x1: ";
    cin >> x1;
    cout << "Enter coordinates for y1: ";
    cin >> y1;
    cout << "Enter coordinates for x2: ";
    cin >> x2;
    cout << "Enter coordinates for y2: ";
    cin >> y2;

    LineComparison Line2(x1, y1, x2, y2); // line 2 object for LineComparison class

    length2 = Line2.calculateLength(); // Calculate length for line 2

    cout << "\nLength of Line 1: " << length1;
    cout << "\nLength of Line 2: " << length2;

    return 0;
}
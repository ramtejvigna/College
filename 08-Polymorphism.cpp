#include<bits/stdc++.h>
using namespace std;
# define PI 3.14

class Areas {
    public:
        double area(double a) {
            return PI*a*a;
        }
        double area(int a) {
            return a*a;
        }
        double area(int a, int b) {
            return a*b;
        }
        double area(double a, double b) {
            return 0.5*a*b;
        }
};
int main() {
    Areas a;
    cout << "Area of square : " << a.area(2) << endl;
    cout << "Area of circle : " << a.area(2.0) << endl;
    cout << "Area of rectangle : " << a.area(5,4) << endl;
    cout << "Area of triangle : " << a.area(2.5,1.5) << endl;
}
#include<iostream>
#include<cmath>
using namespace std;

class Point{
    private:
        // co-ordinates of x and y points in a 2D Plane
        float xcord, ycord;

    public:
        // Parameterised Constructor to create a point instance with custom values
        Point(float x, float y){
            xcord = x;
            ycord = y;
        }

        // To view the point on console
        void viewPoint(){
            cout << "The point is : (" << xcord << ", " << ycord << ")" << endl; 
        }

        friend float calculateDistance(Point, Point);
};

// A function to calculate the distance between two points in a 2D Plane using distance formula
float calculateDistance(Point one, Point two){
    float xcordsq = pow((two.xcord - one.xcord), 2);
    float ycordsq = pow((two.ycord - one.ycord), 2);

    float distance = sqrt(xcordsq + ycordsq);
    cout << "The distance between (" << one.xcord << ", " << one.ycord << ") and (" << two.xcord << ", " << two.ycord << ") is " << distance << " units." << endl;

    return distance;
}

int main()
{
    Point p(0, 0);
    p.viewPoint();

    Point q = Point(4, 6);
    q.viewPoint();

    float distance = calculateDistance(p, q);
    return 0;
}
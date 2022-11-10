#include <iostream>

using namespace std;

class Point
{
public:
    double x, y;

    Point(void) {
	    x = 0.0; y = 0.0;
    }
    
    Point(double nx, double ny) {
	    x = nx; y = ny;
    }

    void getPoint(void) {
        cout << x << ' ' << y << endl;
    }
};

int main(void) {
    Point p(2.0, 3.0); // 2-parameter constructor
    // p.x is 2.0, p.y is 3.0
    Point l(8, 8);
    p.getPoint();
    l.getPoint();
    Point x;
    x.getPoint();

    Point *m = new Point;
    m->getPoint();
    delete m;
}

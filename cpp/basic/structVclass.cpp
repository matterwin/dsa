// Struct (members are public by default)
struct Point {
    int x;
    int y;
    void print() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

// Class (members are private by default)
class Point2D {
private:
    int x;
    int y;
public:
    // Constructor
    Point2D(int x_val, int y_val) : x(x_val), y(y_val) {}

    // Member function to access x coordinate
    int getX() const {
        return x;
    }

    // Member function to access y coordinate
    int getY() const {
        return y;
    }

    // Member function to print coordinates
    void print() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};


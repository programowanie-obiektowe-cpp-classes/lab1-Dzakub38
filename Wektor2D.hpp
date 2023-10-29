class Wektor2D
{
   private:
    double x;
    double y;

public:
    Wektor2D() : x(0.0), y(0.0) {}

    Wektor2D(double x, double y) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    void setX(double newX) {
        x = newX;
    }

    double getY() const {
        return y;
    }

    void setY(double newY) {
        y = newY;
    }

    Wektor2D operator+(const Wektor2D& other) {
        return Wektor2D(x + other.x, y + other.y);
    }

    double operator*(const Wektor2D& other) {
        return x * other.x + y * other.y; // Iloczyn skalarny
    }

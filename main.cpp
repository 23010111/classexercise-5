
    #include <iostream>
#include <cmath>

// Function prototype
double distance(int x1, int y1, int x2, int y2);

int main() {
    int x1, y1, x2, y2;

    // Accepting input from the user
    std::cout << "Enter coordinates of point 1 (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter coordinates of point 2 (x2 y2): ";
    std::cin >> x2 >> y2;

    // Calculating and displaying the distance
    std::cout << "Distance between point 1 and point 2: " << distance(x1, y1, x2, y2) << std::endl;

    return 0;
}

// Function to calculate Euclidean distance
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

#include <iostream>

using namespace std;

// Function to calculate the third angle of a triangle
double findThirdAngle(double angle1, double angle2) {
  if (angle1 + angle2 >= 180) {
    cout << "Error: The sum of the two angles cannot be greater than or equal to 180 degrees." << endl;
    return -1;
  } else {
    double angle3 = 180 - angle1 - angle2;
    return angle3;
  }
}

int main() {
  double angle1, angle2, angle3;

  cout << "Enter the first angle: ";
  cin >> angle1;

  cout << "Enter the second angle: ";
  cin >> angle2;

  angle3 = findThirdAngle(angle1, angle2);

  if (angle3 != -1) {
    cout << "The third angle of the triangle is: " << angle3 << endl;
  }

  return 0;
}

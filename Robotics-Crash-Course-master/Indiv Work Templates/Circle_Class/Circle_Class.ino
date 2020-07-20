// Circle Class
class Circle {
   // Private variables that can only be accessed within the class
   int radius;
   // Place private variables here.
   
  // Everything after "public" can be accesed outside of the class (i.e in "setup" or "loop")
  public:
    Circle(int);
    // Create a function that returns area (use 3.14 for pi)
    double area() {return pow(radius, 2) * 3.14;}
    // Create a function that allows the user to update the values
    void setRadius(int);
};

// Definitions of functions declared above
Circle::Circle(int x) {
  radius = x;
}

void Circle::setRadius(int x) {
  radius = x;
}
void setup() {
  // Instantiates the Circle class
  Circle circ(5);
  // Can only print after serial.begin()
  Serial.begin(9600);
  
  
  // Calls the area() function within the class
  double area = circ.area();
  // Prints area
  Serial.println(area);
  // Updates values
  circ.setRadius(10);
  double area2 = circ.area();
  // Prints new areas
  Serial.println(area2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

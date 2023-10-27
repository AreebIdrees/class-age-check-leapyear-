# class-age-check-leapyear
n this C++ program, we use classes to encapsulate the properties and behaviors of different shapes. The program calculates and displays the area and perimeter (or circumference) of square, rectangle, circle, and equilateral triangle shapes.

Theory on Classes
What is a Class?
In C++, a class is a user-defined data type that serves as a blueprint for creating objects. It defines a set of attributes (data members) and methods (member functions) that the objects of the class will have.

Encapsulation
One of the fundamental principles of object-oriented programming (OOP) is encapsulation. Encapsulation refers to the bundling of data (attributes) and methods (functions) that operate on that data into a single unit called a class. This concept helps in hiding the internal details of a class from the outside world and provides data security.

Class Members
Data Members: These are the attributes or variables that store data related to the class. In the Shapes class, data members could include the side length, radius, length, breadth, or height of various shapes.

Member Functions: These are the methods or functions that perform operations on the data members of the class. Member functions define the behavior of the class. For example, the square() member function calculates the area and perimeter of a square.

Object
An object is an instance of a class. It is a real-world entity that can be created based on the class's blueprint. In the code, the line Shapes shape; creates an object of the Shapes class named shape.

Access Specifiers
In C++, class members can have different access specifiers:

public: Members declared as public are accessible from outside the class.
private: Members declared as private are not accessible from outside the class and are intended for internal use only.
protected: Members declared as protected have limited access, similar to private, but with some differences in inheritance.

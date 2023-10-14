In C++, a class is a fundamental concept used in object-oriented programming (OOP) to define a blueprint or template for creating objects.
Objects are instances of classes, and they can contain both data (attributes or properties) and functions (methods or member functions) that operate on that data.
Classes provide a way to encapsulate data and behavior into a single unit, promoting modularity, reusability, and maintainability in your code.

class ClassName {
public:
    // Data members (attributes)
    DataType member1;
    DataType member2;

    // Member functions (methods)
    ReturnType methodName1(Parameters);
    ReturnType methodName2(Parameters);
    // ...
};
In this template:

->class keyword is used to declare a class.
->ClassName is the name of the class.
    Is an access specifier that specifies the visibility of members. public members are accessible from outside the class.
->DataType, represents the data type of class data members (attributes).
->member1, member2, etc. are data members (attributes).
->ReturnType, represents the data type of the values returned by member functions (methods).
->methodName1, methodName2 etc. are member functions (methods).
->Parameters are the input parameters that can be passed to member functions.

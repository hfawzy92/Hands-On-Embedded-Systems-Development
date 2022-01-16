# Classes and Objects

1. What is the difference between procedural and object orinted programming style ?
2. What is the difference between Class and Object ?
   1. Class is a model. T/F ?
   2. Class is a blue print. T/F ?
3. The C++ Class consist of two parts: Attributes (data) and Methods (functions).
   1. Classes contradic with the encapsulation principle. T/F ?
4. Class attributes can be accessed using dot (.) operator. T/F ?
5. Class attributes can be accessed using pointer (->) operator. T/F ?
6. What is the difference between Pascal case and Camel case ?
7. What is the purpose of "public" and "private" keywords ?
   1. Private class memebers can be used by anyone in possessition of an object of the classs. T/F ?
10. What do we mean by the "constructor" of the class ?
    1.  Constructor is a built-in attribute of any class. T/F ?
    2.  Constructor is a spectial function/method invoked during the instantiation of a class. T/F ?
    4.  What could be the purpose/benefit of a class constuctor ?
    5.  A class must has only 1 constructor. T/F ?
        1.  What is meant by "Default Constructor" ?
        2.  What is meant  by "Constructor Overloading" ?
    6.  Constructor can be implemented either inline within the class or externally outside. T/F ?
    7.  What is the :: operator called ?
    8.  You can choose to not implement the default constructor. Why would you do that ?
        1.  Given the presence of an overloaded constructor, the C++ compiler does not generate a 
            default constructor for you. T/F ?
    9.  Constructor parameters can have default values. T/F ?
    10. Default constructor must not take any parameters. T/F ?
        1.  A constructor that has a default values for all parameters, is a default constructor. T/F ?
11. What could be the purpose/benefit of a class destuctor ?
    1.  A class must has only 1 destuctor. T/F ?
    2.  If you forget to implement a destructor, the compiler creates and invokes a dummy destructor. T/F ?
        1.  Does it clean up the allocated memory ?

# Practice Makes Perfect! Get your hands-on the following examples.

1. Human-class-with-public-attributes.cpp
    1. Define class Human
       1. Attributes
          1. public
             1. name: string
             2. age: int
       2. Methods
          1. public
             1. IntroduceSelf()
                1. Return: void
                2. Args: None
                3. Logic
                   1. print I'm {name} and am {age} years old !
                   2. print new line.
    2. main
       1. Instantiate firstMan and firstWoman object of type Class Human
       2. Set firstMan and firstWoman attributes (you choose the values).
       3. Invoke IntroduceSelf() of firstMan and firstWoman.
2. Human-class-with-private-attributes.cpp
   1. Define class Human:
      1. Attributes:
         1. private:
            1. name: string
            2. age: int
      2. Methods:
         1. public:
            1. GetAge:
               1. Return: int
               2. Args: None
               3. Logic:
                  1. Return value of the attribute {age}
            2. SetAge:
               1. Return: void
               2. Args:
                  1. humansAge: int
               3. Logic:
                  1. Set value of the attribute {age} with {humansAge}
            3. GetName:
               1. You think !
            4. SetName:
               1. You think !
            5. IntroduceSelf
               1. Return: void
               2. Args: None
               3. Logic:
                  1. print I'm {name} and am {age} years old !
                  2. print new line.
   2. main
      1. Instantiate firstMan and firstWoman object of type Class Human
      2. Set firstMan and firstWoman attributes (you choose the values).
         1.  Are you able to use the dot operator ?
         2.  Try to set age of firstMan to -1970 ! How to avoid such a situation ?
      3. Invoke IntroduceSelf() of firstMan and firstWoman.
3. Human-class-with-explicit-default-constructor.cpp
    1. Define default constructor of class human (inline within the class)
       1. Age = 1
       2. print "Instance of class Human has been constructed" , then new line.
4. Human-class-with-overloaded-constructors.cpp
    1. Define full parameters constructor.
       1. Args:
          1. humansName: string
          2. humanAge: int
       2. Print "Overloaded constructor creates {name} of age {age}"
5. Human-class-without-default-constructor.cpp
   1. Remove the default constructor , and keep the full parameters constructor.
      1. Can you create an object of Class Human without passing arguments ?
6. Human-class-constructor-with-default-values.cpp
   1. In the full parameters constructor
      1. Set default {name} to "Adam"
      2. Set default {age} to 25
   2. In main()
      1. Create object of Class Human , without passing arguments.
      2. Create object of Class Human , with passing only name argument.
7. Human-class-constructor-with-initialization-lits.cpp
   1. In the full parameters constructor , use the initialization list style to:
      1. Initialize the attributes using the constructor parameters
      2. Set default {name} to "Adam"
      3. Set default {age} to 25
8. Simple-string-class-implementation-using-destructor.cpp
   1. Define Class: MyString
      1. private
         1. *buffer: pointer to char
      2. public
         1. Constructor
            1. Args
               1. *initString: pointer to constant char
            2. Logic
               1. if initString is valid (not null)
                     1. Allocate dynamic memory for attribute buffer
                     2. Copy initString to attribute buffer
               2. else
                  1. Set buffer to NULL
         2. Destructor
            1. print "Invoking destructor, clearing up" followed by new line
            2. if buffer has valid string
               1. deallocate the memory of buffer
         3. GetLength
         4. GetString
         5. main
            1. Create sayHello object of type MyString
               1. parameter: "Hello from String Class"
            2. print the length of the string in the object sayHello
            3. print the contents of the string in the object sayHello
9. 
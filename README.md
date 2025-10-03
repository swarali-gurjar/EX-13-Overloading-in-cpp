# Aim: To study and implement Overloading in C++

## Theory:

Overloading in C++ is a feature of polymorphism that allows the same function name or operator to perform different tasks depending on the type or number of arguments. It improves program readability and reusability.

**1.** **Function Overloading**

- Definition: Two or more functions can have the same name but differ in the number or type of parameters.

- The compiler determines which function to call based on arguments (compile-time polymorphism).

**2.** **Operator Overloading**

- Definition: C++ allows predefined operators (like +, -, *, ==) to be redefined for user-defined data types (like classes).

- This gives special meaning to operators when applied to objects.

- Implemented using a special function operator<symbol>()

**Advantages of Overloading**-

- Improves code readability and simplicity.

- Provides compile-time polymorphism.

- Enables natural expression of operations for user-defined types.

**Limitations**-

- Cannot overload all operators (::, .*, .?, sizeof etc. cannot be overloaded).

- Function signatures must differ; only return type change is not allowed.

  ## 1. Algorithm

**Step 1**: Start

**Step 2**: Define a class Addition with overloaded functions:

- Function 1: int add(int a, int b) → returns the sum of two integers.

- Function 2: double add(double a, double b, double c) → returns the sum of three double values.

**Step 3**: In main():

- Create an object a1 of class Addition.

- Call a1.add(2.5, 5) → invokes function that adds two numbers.

- Display the result.

- Call a1.add(3.4, 9.7, 2.6) → invokes function that adds three numbers.

- Display the result.

**Step 4**: End.

## 2. Algorithm

**Step 1**: Start

**Step 2**: Define a class Distance with data members:

- feet (integer)

- inches (integer)

**Step 3**: Create a constructor to initialize distance values (default 0,0 if no arguments are given).

**Step 4**: Overload the + operator:

- Add feet of two objects.

- Add inches of two objects.

- If inches >= 12, convert extra inches into feet:

- feet += inches / 12

- inches = inches % 12

- Return the new Distance object.

**Step 5**: Define a display() function to print distance in the format:

- X feet Y inches

**Step 6**: In main():

- Create object d1 with 5 feet 8 inches.

- Create object d2 with 3 feet 10 inches.

- Use overloaded + operator: d3 = d1 + d2.

- Display d1, d2, and d3.

**Step 7**: End

## 3. Algorithm

**Step 1**: Start

**Step 2**: Define a class Student with data members:

- name (string)

- age (integer)
**
Step 3**: Define two constructors:

- Default constructor: Initializes name = "Nia" and age = 18.

- Parameterized constructor: Initializes name = n and age = a.

**Step 4**: Define a member function display() to print student details:

- Name: <name>

- Age: <age>

**Step 5**: In main():

- Create object s1 using default constructor.

- Create object s2 using parameterized constructor ("Suyashi", 19).

- Call s1.display() to show details of s1.

- Call s2.display() to show details of s2.

**Step 6**: End

## Conclusion

In this experiment we learnt that overloading in C++ is a feature of compile-time polymorphism that allows the same function or operator to perform different tasks based on the number or type of arguments. We implemented function overloading, operator overloading, and constructor overloading to understand how the same name can be reused with different parameter lists or behaviors. Overloading improves code readability, flexibility, and reusability, making programs more efficient and user-friendly.

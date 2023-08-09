# Type Conversion in C++

Type conversion, also known as type casting, is the process of converting a value from one data type to another in C++. This is useful when you need to perform operations or assignments involving different data types. C++ provides several ways to perform type conversion:

## 1. Implicit Type Conversion (Coercion)

Implicit type conversion, also known as coercion, happens automatically when a value of one data type is assigned to a variable of another data type that can accommodate the value without loss of data.

### Example

```cpp
int num = 10;
double result = num;  // Implicit conversion from int to double
```

## 2. Explicit Type Conversion

Explicit type conversion involves manually converting a value from one data type to another using casting operators. There are two types of explicit type conversion:

### a. C-style Type Casting

C-style casting uses the syntax `(new_type) value` to explicitly convert a value to a different data type. However, it's important to note that C-style casting may perform unsafe conversions and should be used with caution.

### Example

```cpp
double num = 3.14;
int intValue = (int)num;  // C-style casting from double to int

```

### b. C++ Type Casting Operators

C++ provides safer alternatives for type casting using specific casting operators:

* `static_cast`: Used for safe and well-defined type conversions.
* `dynamic_cast`: Used for casting in polymorphic classes (runtime type checking).
* `const_cast`: Used to add or remove`const` qualifier.
* `reinterpret_cast`: Used for low-level casting between unrelated pointer types.

### Example using `static_cast`

```cpp
int num = 5;
double result = static_cast<double>(num);  // Safe conversion from int to double

```

## 3. String Conversion

Converting numeric values to strings and vice versa is a common task. C++ provides functions for these conversions in the `<string>` and `<sstream>` libraries.

### Example

```cpp
#include <iostream>
#include <string>
#include <sstream>

int main() {
    int num = 42;
    std::string str = std::to_string(num);  // Convert int to string

    std::string numStr = "123";
    int parsedNum = std::stoi(numStr);      // Convert string to int

    return 0;
}

```

Remember to include necessary header files when using the conversion functions.

These are the basics of type conversion in C++. Understanding these concepts will help you manipulate and transform data across different data types efficiently.

For more advanced or specific scenarios, refer to the [C++ Standard](https://isocpp.org/) and consult relevant documentation.

Now you can add this Markdown guide to your GitHub repository and share your knowledge of type conversion in C++!

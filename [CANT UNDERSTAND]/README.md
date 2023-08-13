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

# **getline**

1. `std::getline`: This is a function provided by the C++ Standard Library that is used to read a line of text from an input stream.
2. `std::cin`: This is the standard input stream. It is used to read input from the user, typically from the keyboard.
3. `name`: This is a `std::string` variable where the input line will be stored. You need to have previously declared the `name` variable as a `std::string`.

```cpp
std::getline(std::cin, name);

```

Here's what happens:

1. The program waits for user input from the standard input (keyboard).
2. The user types a line of text and presses the "Enter" key.
3. The `std::getline` function reads the entire line of text, including any spaces, until it encounters the "Enter" key press.
4. The read text is then stored in the `name` variable, which is of type `std::string`.

# Pre Increment and Post Increment

**Pre-Increment (`++x` or `++variable`):**
In pre-increment, the value of the variable is increased by 1 before its current value is used in an expression.

like see it the value is increased by 1 before assignment

```cpp
int x = 5;
int y = ++x;  // Increment x first, then assign the new value to y.
```

```cpp
int a = 5;
int b = ++a; // Now a = 6, b = 6
```

**Post-increment:**
Post-increment is an operation where the value of a variable is incremented by 1 after its current value is used in an expression.

The syntax for post-increment is:

the value of the variable is increment before the assignment.

```cpp
int x = 10;
int y = x++; // Now x = 11, y = 10
```

## Get the Size of an Array

To get the size of an array, you can use the `sizeof()` operator:

### Example

**int** **myNumbers[****5****] = {****10****,** **20****,** **30****,** **40****,** **50****};**
**cout <<** **sizeof(myNumbers)** **;**

Result:

`20`

Why did the result show `20` instead of `5`, when the array contains 5 elements?

It is because the `sizeof()` operator returns the size of a type in **bytes** .

You learned from the [Data Types chapter](https://www.w3schools.com/cpp/cpp_data_types.asp) that an `int` type is usually 4 bytes, so from the example above, *4 x 5 (4 bytes x 5 elements) = **20 bytes*** .

**To find out how many elements an array has** , you have to divide the size of the array by the size of the data type it contains:

### Example

```cpp
int getArrayLength = sizeof(myNumbers) / sizeof(int) ;
cout << getArrayLength;
```

# References in CPP

```cpp
#include <iostream>
using namespace std;

int main() {
    int original = 42;

    int& ref = original;  // Creating a reference

    cout << "Original: " << original << endl;
    cout << "Reference: " << ref << endl;

    ref = 99;  // Modifying through the reference

    cout << "Modified Original: " << original << endl;
    cout << "Modified Reference: " << ref << endl;

    return 0;
}

```

### Out Put of the code is

In this example, `ref` is a reference to the variable `original`. Modifying `ref` also modifies `original`, and vice versa. Output:

```output
Original: 42
Reference: 42
Modified Original: 99
Modified Reference: 99

```




**Example 1: Using References in Function Parameters**

References can be used as function parameters to modify variables directly or to avoid copying large objects.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">void</span> <span class="hljs-title">modifyValue</span><span class="hljs-params">(<span class="hljs-type">int</span>& num)</span> </span>{
    num *= <span class="hljs-number">2</span>;
}

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> value = <span class="hljs-number">5</span>;

    cout << <span class="hljs-string">"Before: "</span> << value << endl;
    <span class="hljs-built_in">modifyValue</span>(value);
    cout << <span class="hljs-string">"After: "</span> << value << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">Before: 5</span>
<span class="hljs-section">After: 10</span>
</code></div></div></pre>

**Example 2: Returning a Reference from a Function**

Functions can also return references, allowing you to chain operations.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span>& <span class="hljs-title">getLarger</span><span class="hljs-params">(<span class="hljs-type">int</span>& a, <span class="hljs-type">int</span>& b)</span> </span>{
    <span class="hljs-keyword">return</span> (a > b) ? a : b;
}

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> x = <span class="hljs-number">7</span>, y = <span class="hljs-number">5</span>;

    <span class="hljs-built_in">getLarger</span>(x, y) = <span class="hljs-number">10</span>;

    cout << <span class="hljs-string">"x: "</span> << x << endl;
    cout << <span class="hljs-string">"y: "</span> << y << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">x: 10</span>
<span class="hljs-section">y: 5</span>
</code></div></div></pre>

**Example 3: Using References with Containers**

References are commonly used for iterating over containers.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><vector></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    vector<<span class="hljs-type">int</span>> numbers = {<span class="hljs-number">1</span>, <span class="hljs-number">2</span>, <span class="hljs-number">3</span>, <span class="hljs-number">4</span>, <span class="hljs-number">5</span>};

    <span class="hljs-keyword">for</span> (<span class="hljs-type">int</span>& num : numbers) {
        num *= <span class="hljs-number">2</span>;
    }

    <span class="hljs-keyword">for</span> (<span class="hljs-type">const</span> <span class="hljs-type">int</span>& num : numbers) {
        cout << num << <span class="hljs-string">" "</span>;
    }

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs">2 4 6 8 10
</code></div></div></pre>

**Example 4: Reference to Array Element**

You can also create references to specific elements of an array.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> arr[<span class="hljs-number">5</span>] = {<span class="hljs-number">10</span>, <span class="hljs-number">20</span>, <span class="hljs-number">30</span>, <span class="hljs-number">40</span>, <span class="hljs-number">50</span>};

    <span class="hljs-type">int</span>& ref = arr[<span class="hljs-number">2</span>]; <span class="hljs-comment">// Creating a reference to arr[2]</span>

    cout << <span class="hljs-string">"Original: "</span> << arr[<span class="hljs-number">2</span>] << endl;
    ref = <span class="hljs-number">99</span>; <span class="hljs-comment">// Modifying through the reference</span>
    cout << <span class="hljs-string">"Modified: "</span> << arr[<span class="hljs-number">2</span>] << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">Original: 30</span>
<span class="hljs-section">Modified: 99</span></code></div></div></pre>





**Example 1: Using References in Function Parameters**

References can be used as function parameters to modify variables directly or to avoid copying large objects.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">void</span> <span class="hljs-title">modifyValue</span><span class="hljs-params">(<span class="hljs-type">int</span>& num)</span> </span>{
    num *= <span class="hljs-number">2</span>;
}

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> value = <span class="hljs-number">5</span>;

    cout << <span class="hljs-string">"Before: "</span> << value << endl;
    <span class="hljs-built_in">modifyValue</span>(value);
    cout << <span class="hljs-string">"After: "</span> << value << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">Before: 5</span>
<span class="hljs-section">After: 10</span>
</code></div></div></pre>

**Example 2: Returning a Reference from a Function**

Functions can also return references, allowing you to chain operations.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span>& <span class="hljs-title">getLarger</span><span class="hljs-params">(<span class="hljs-type">int</span>& a, <span class="hljs-type">int</span>& b)</span> </span>{
    <span class="hljs-keyword">return</span> (a > b) ? a : b;
}

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> x = <span class="hljs-number">7</span>, y = <span class="hljs-number">5</span>;

    <span class="hljs-built_in">getLarger</span>(x, y) = <span class="hljs-number">10</span>;

    cout << <span class="hljs-string">"x: "</span> << x << endl;
    cout << <span class="hljs-string">"y: "</span> << y << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">x: 10</span>
<span class="hljs-section">y: 5</span>
</code></div></div></pre>

**Example 3: Using References with Containers**

References are commonly used for iterating over containers.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><vector></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    vector<<span class="hljs-type">int</span>> numbers = {<span class="hljs-number">1</span>, <span class="hljs-number">2</span>, <span class="hljs-number">3</span>, <span class="hljs-number">4</span>, <span class="hljs-number">5</span>};

    <span class="hljs-keyword">for</span> (<span class="hljs-type">int</span>& num : numbers) {
        num *= <span class="hljs-number">2</span>;
    }

    <span class="hljs-keyword">for</span> (<span class="hljs-type">const</span> <span class="hljs-type">int</span>& num : numbers) {
        cout << num << <span class="hljs-string">" "</span>;
    }

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs">2 4 6 8 10
</code></div></div></pre>

**Example 4: Reference to Array Element**

You can also create references to specific elements of an array.

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>cpp</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-cpp"><span class="hljs-meta">#<span class="hljs-keyword">include</span> <span class="hljs-string"><iostream></span></span>
<span class="hljs-keyword">using</span> <span class="hljs-keyword">namespace</span> std;

<span class="hljs-function"><span class="hljs-type">int</span> <span class="hljs-title">main</span><span class="hljs-params">()</span> </span>{
    <span class="hljs-type">int</span> arr[<span class="hljs-number">5</span>] = {<span class="hljs-number">10</span>, <span class="hljs-number">20</span>, <span class="hljs-number">30</span>, <span class="hljs-number">40</span>, <span class="hljs-number">50</span>};

    <span class="hljs-type">int</span>& ref = arr[<span class="hljs-number">2</span>]; <span class="hljs-comment">// Creating a reference to arr[2]</span>

    cout << <span class="hljs-string">"Original: "</span> << arr[<span class="hljs-number">2</span>] << endl;
    ref = <span class="hljs-number">99</span>; <span class="hljs-comment">// Modifying through the reference</span>
    cout << <span class="hljs-string">"Modified: "</span> << arr[<span class="hljs-number">2</span>] << endl;

    <span class="hljs-keyword">return</span> <span class="hljs-number">0</span>;
}
</code></div></div></pre>

Output:

<pre><div class="bg-black rounded-md mb-4"><div class="flex items-center relative text-gray-200 bg-gray-800 px-4 py-2 text-xs font-sans justify-between rounded-t-md"><span>makefile</span><button class="flex ml-auto gap-2"><svg stroke="currentColor" fill="none" stroke-width="2" viewBox="0 0 24 24" stroke-linecap="round" stroke-linejoin="round" class="h-4 w-4" height="1em" width="1em" xmlns="http://www.w3.org/2000/svg"><path d="M16 4h2a2 2 0 0 1 2 2v14a2 2 0 0 1-2 2H6a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2h2"></path><rect x="8" y="2" width="8" height="4" rx="1" ry="1"></rect></svg>Copy code</button></div><div class="p-4 overflow-y-auto"><code class="!whitespace-pre hljs language-makefile"><span class="hljs-section">Original: 30</span>
<span class="hljs-section">Modified: 99</span></code></div></div></pre>

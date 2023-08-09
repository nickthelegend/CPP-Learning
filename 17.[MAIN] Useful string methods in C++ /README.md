C++ offers a variety of useful string methods through the Standard Library's `<string>` header and the `std::string` class. Here are some commonly used string methods:

1. **`length()` or `size()`** : Returns the length of the string.

```cpp
std::string str = "Hello, world!";
int len = str.length(); // or str.size();
```

2. **`empty()`** : Checks if the string is empty.

```cpp
bool isEmpty = str.empty();


```

3. **`clear()`** : Clears the contents of the string.

```cpp
str.clear();

```

4. **`append()` or `+=`** : Appends a string or character to the end.

```cpp
str.append("Welcome");
str += "!";
```

5. **`insert()`** : Inserts a substring at a specific position.

```cpp
str.insert(7, " there");
```

6. **`erase()`** : Removes a portion of the string.

```cpp
str.erase(7, 5); // Removes " there"

```

7. **`replace()`** : Replaces a portion of the string with another string.

```cpp
str.replace(7, 5, "you"); // Replaces " there" with "you"

```

8. **`substr()`** : Extracts a substring from the string.

```cpp
std::string sub = str.substr(0, 5); // Extracts "Hello"


```

9. **`find()` and `rfind()`** : Finds the first or last occurrence of a substring.

```cpp
size_t pos = str.find("world");
size_t lastPos = str.rfind("l"); // Last 'l' position
```

10. **`compare()`** : Compares two strings lexicographically.

```cpp
int result = str.compare("Hello");
if (result == 0) // Equal
else if (result < 0) // str comes before
else // str comes after

```


11. **`c_str()`** : Returns a C-style (null-terminated) string.

```cpp

const char* cstr = str.c_str();

```
12. **`stoi()`, `stol()`, `stof()`, `stod()`, `stoul()`** : Convert strings to numeric types.

```cpp
int num = std::stoi("123");
double dbl = std::stod("3.14");

```

13. **`to_string()`** : Converts numeric types to strings.
```cpp
std::string numStr = std::to_string(42);
```

14. **`getline()`** : Reads a line from an input stream.

```cpp
std::string line;
std::getline(std::cin, line);
```
15. **`find_first_of()` and `find_last_of()`** : Find the first or last occurrence of any character from a set.

```cpp
size_t pos = str.find_first_of("aeiou");
size_t lastPos = str.find_last_of("aeiou");

```
16. **`find_first_not_of()` and `find_last_not_of()`** : Find the first or last occurrence of a character not in a set.

```cpp
size_t pos = str.find_first_not_of("Helo,");
size_t lastPos = str.find_last_not_of("!");
```

Remember, these are just some of the many string methods available in C++. Always consult the C++ documentation for the most accurate and up-to-date information.

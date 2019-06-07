#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"
#include <iostream>

/** at(int position)
   * Returns the character at the given position, throws an exception if the
   * position is out of bounds.
   * O(?) Requires separate if statement
   * Big O: O(n^2)
   * Omega: n^2
   * Theta: 0(n^2)
   */
char at(int) {
    for(int i = 0; i < len(string); ++i) {
        if(i = string[i]) {
            return string[i];
        }
        else if(i = 0) {
            return "Null";
        }
        else {
            return "Null";
        }
    }
}

  /** empty()
   * Returns whether or not the string is empty.
   * O(?) Included in else
   * Big O: O(n)
   * Omega: n
   * Theta: 0(n)
   */
bool empty() {
    if(len(string) > 0) {
        bool empty = false;
    }
    else {
        bool empty = true;
    }
}

  /** size()
   * Returns the number of characters in the string.
   * Big O: O(n^2)
   * Omega: n
   * Theta:
   */
unsigned int size() {
    while(int i < len(string)) {
        ++i;
    }
    return i;
}

  /** capacity()
   * Returns the number of characters that the string can hold.
   * O(?)
   * Big O:
   * Omega:
   * Theta:
   */
unsigned int capacity() {

}

  /** reserve(int extra)
   * Reserves extra amount of characters, extending the capacity of the string.
   * O(?)
   * Big O:
   * Omega:
   * Theta:
   */
void reserve(unsigned int) {

}

  /** insert(char c, int index)
   * Inserts the given character `c` into the string at the given index.
   * If the index is out of bounds the character should appended / prepended.
   * O(?)
   * Big O:
   * Omega:
   * Theta:
   */
void insert(char, int) {

}

  /** erase(char)
   * Erases all copies of the given character from the string.
   * O(?) Unnecessary, no cases
   * Big O: O(n^2)
   * Omega: n^2
   * Theta: 0(n^2)
   */
void erase(char) {
    for(i = 0; i < len(string); i++) {
        if (char[] = string[i]) {
            return string[] - string[i];
        }
    }
}

  /** remove(int index)
   * Removes the character at the given index.
   * O(?) Unnecessary, 0 is placement value of first character
   * Big O: O(n)
   * Omega: n
   * Theta: 0(n)
   */
void remove(int) {
    if char[] = string[i] (
        return string[] - string[i];
    )
}

  /** append(char)
   * Appends the given character to the string.
   * O(?) Appends a 0
   * Big O: O(n)
   * Omega: n
   * Theta: 0(n)
   */
void append(char) {
    string = string + char;
}

  /** prepend(char)
   * Prepends the given character to the string.
   * O(?) Prepends a 0
   * Big O: O(n)
   * Omega: n
   * Theta: 0(n)
   */
void prepend(char) {
    string = char + string;
}

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(?) Will always return false, unless string is = 0
   * Big O: O(n^2)
   * Omega: n
   * Theta:
   */
bool compare(char*) {
    if(char* == string[]) {
        bool compare = true;
    }
    if(char* != string[]) {
        bool compare = false;
    }
}

bool compare(String&) {
    if(String& == string) {
        bool compare = true;
    }
    if(String& != string) {
        bool compare = false;
    }
}

  /** concatenate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(?) Concatenates 0 to the string
   * Big O: O(n)
   * Omega: n
   * Theta: 0(n)
   */
void concatenate(char*) {
    string + char* = new string;
}

void concatenate(String&) {
    string + String& = new string;
}

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(?) Would be in the case of returning the first placement value
   * Big O: O(n^2)
   * Omega: n^2
   * Theta: 0(n^2)
   */
unsigned int find(char*, int) {
    for(int i = 0; i < len(string); ++i) {
        if(char* = string[i]) {
            return i;
        }
        else {
            return len(string);
        }
    }
}
const

unsigned int find(char, int) {
    for(int i = 0; i < len(string); ++i) {
        if(char = string[i]) {
            return i;
        }
        else {
            return len(string);
        }
    }
}

unsigned int find(String&, int) {
    for(int i = 0; i < len(string); ++i) {
        if(String& = string[i]) {
            return i;
        }
        else {
            return len(string);
        }
    }
}

  /** reverse()
   * Reverses the string in-place.
   * O(?) Would still be 0
   * Big O: O(n^2)
   * Omega: n^2
   * Theta: 0(n^2)
   */
void reverse() {
    newString = newString;
    for(int i = len(string); i > 0; --i;) {
        newString = append(string[i]);
    }
}

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   * Big O:
   * Omega:
   * Theta:
   */
void shift(int) {

}

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
   * Big O:
   * Omega:
   * Theta:
   */
int toInt() {

}

  /** substr(start, end)
   * Returns the string contained between [start, end).
   * O(?) First placement value of string is 0
   * Big O: O(n^2)
   * Omega: n
   * Theta:
   */
String substr(int, int) {
    substring = new string;
    for(i = 0; i <= j; i++) {
        append(substring, string[i]);
    }
}
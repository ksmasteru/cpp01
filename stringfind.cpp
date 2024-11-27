#include <iostream>

#include <string>

using namespace std;

// Driver code
int main() {
  string original_str = "coding ninjas is the best coding mentorship platform";
  char target_str[] = "coding_ninjas";

  // Find the first occurrence of "coding_ninjas" with only the first six characters
  size_t found = original_str.find(target_str, 0, 6);
  if (found != string::npos)
    cout << "Initial occurrence is at the index " <<
    found << endl;

  // Find the Next occurrence of "coding_ninjas" with only the first six characters

  found = original_str.find(target_str, found + 1, 6);
  if (found != string::npos)
    cout << "Next occurrence is at the index " <<
    found << endl;

  return 0;
}
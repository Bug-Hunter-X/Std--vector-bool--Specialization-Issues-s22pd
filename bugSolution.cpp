#include <vector>
#include <iostream>

int main() {
  std::vector<bool> vec(10);
  vec[5] = true;

  // Avoid direct access with std::vector<bool>
  // Instead, use at() for bounds checking or iterators for safer access

  // Using at() for bounds checking
  try {
    std::cout << "Element at index 5: " << vec.at(5) << std::endl;  
    std::cout << "Element at index 10: " << vec.at(10) << std::endl; //Throws exception
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

    //Using iterators for safer access
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

  // Alternative: Use std::vector<int> or other suitable types if direct boolean access is needed without special considerations.
  return 0;
}

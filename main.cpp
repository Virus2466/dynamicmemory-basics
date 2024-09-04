#include <iostream>

int main()
{
    int numberOfStudents = 0;

    std::cout << "How many students in our class ? : ";
    std::cin >> numberOfStudents;

    // new keyword is for allocating resources at runtime 
    int* studentids = new int[numberOfStudents];


    for (int i = 0; i < numberOfStudents; i++) {
        studentids[i] = i;
    }

    // prevents memory leaks.
    delete[] studentids;

    return 0;

}

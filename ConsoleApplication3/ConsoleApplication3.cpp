// This is for the CodeForces challenges named Remove Two Letters, code 1800D. The code works but exceeds the memory allowed on one test. 
// As of writing this, no one has solved this challenge with C++ successfully within that limited memory usage.
// Link to challenge: https://codeforces.com/problemset/problem/1800/D

#include <iostream>
#include <string>
#include <set>
#include <vector>

int number_of_unique_strings(std::string& const s, int length)
{
    std::set<std::string> unique_strings;
    for (int i = 0; i < (length - 1); i++) // Here we start with the index of the first charcter in the string and end with the index 
    {                                      // of the second to last, in such a way that makes there always be elements at s[i] and at s[i+1]
        std::string temp = s;
        temp.erase(i, 2);
        unique_strings.set::insert(temp);
    }
    return unique_strings.set::size();
}

int main()
{
    unsigned short int number_of_tests;
    std::cin >> number_of_tests;
    std::vector<std::string> test_strings;
    for (int j = 0; j < number_of_tests; j++)
    {
        unsigned int number_of_chars;
        std::string test_string = "";
        std::cin >> number_of_chars;
        for (int k = 0; k <= number_of_chars; k++)
        {
            char temp;
            scanf_s("%c", &temp, 1);
            if(k) test_string += temp;
        }     
        test_strings.push_back(test_string);
    }

    for (std::string test_case : test_strings)
    {
        std::cout << number_of_unique_strings(test_case, test_case.size()) << std::endl;
    }
}
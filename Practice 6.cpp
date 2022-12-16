#include <iostream>
#include <vector>


int main()
{
    std::vector <int> nums;
    std::vector <int>::iterator i;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);

    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums.erase(nums.begin() + 1, nums.end() - 1);
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums.insert(nums.begin() + 2, 1, 1);
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums.emplace_back(2);
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums.resize(5);
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;
    std::cout << nums.capacity() << std::endl;

    nums.reserve(20);
    std::cout << nums.capacity() << std::endl;

    nums.shrink_to_fit();
    std::cout << nums.capacity() << std::endl;

    nums.clear();
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums = { 1, 2, 3, 4, 5 };
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }
    std::cout << std::endl;

    nums[4] = 10;
    for (i = nums.begin(); i != nums.end(); i++) 
    {
        std::cout << *i << ' ';
    }

    return 0;
}
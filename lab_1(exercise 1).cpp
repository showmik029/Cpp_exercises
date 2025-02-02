#include <iostream>
#include <vector>

int main()
{  int num;
    std::cout << "How many numbers do you want to enter?: ";
    std::cin >> num;
    std::vector<int>numbers;
    for (int i = 1; i <= num; i++)
    {   int temp;
        std::cout <<"Enter nr["<<i<<"]: ";
        std::cin >> temp;
        numbers.push_back(temp);
    }
    std::cout <<"The numbers you entered are: ";
    int count=0;
    for (int num : numbers)
    {
        std::cout << num;
        count++;
        if (count !=numbers.size())
        {
            std::cout << ",";
        }
    }


}

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main ()
{
    string input;
    while (true)
    {
        cout << "Enter a line with numbers or \"stop\": ";
        getline(cin, input);
        if (input == "stop")
        {
            break;
        }
        else
        {
            istringstream iss(input);
            int sum=0;
            int count=0;
            int num;
            while (iss >> num)
            {
                sum+=num;
                count++;
            }
            cout << "total of " << count << " number is " << sum << endl;
        }
    }
}
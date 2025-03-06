#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>
using namespace std;
namespace fs = std::filesystem;

int main()
{
    vector <string> folder;
    string file;
    cout << "Enter the file name or \"black space\" to stop: ";
    while (getline(cin, file) && !file.empty())
    {
        folder.push_back(file);
    }
    if (folder.empty())
    {
        cout << "You entered nothing" << endl;
        return 0;
    }
    fs::path p;
    for (const auto& f : folder)
    {
        p/=f;
    }
    fs::create_directories(p);
    fs::path p2 =p/"result.txt";
    ofstream writefile(p2);
    if (!writefile) {
        cerr << "Failed to open file for writing.\n";
        return 1;
    }

    fs::path p3 = fs::absolute(p2);
    cout << p3 << endl;
    writefile << p3 << endl;

    for (const auto& f : folder)
    {   cout << f << endl;
        writefile << f << endl;
    }
    cout << p2 <<endl;
    writefile<<p2<<endl;


}

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int     main()
{
    // AY274119.txt  AY278488.2.txt  MN908947.txt  MN988668.txt  MN988669.txt
    cout << setw(20) << left << " "                 << setw(20) << "AY274119.txt" << setw(20) << "AY278488.2.txt" << setw(20) << "MN908947.txt" << setw(20) << "MN988668.txt" << setw(20) << "MN988669.txt" << '\n';
    cout << setw(20) << left << "AY274119.txt"      << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << '\n';
    cout << setw(20) << left << "AY278488.2.txt"    << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << '\n';
    cout << setw(20) << left << "MN908947.txt"      << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << '\n';
    cout << setw(20) << left << "MN988668.txt"      << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << '\n';
    cout << setw(20) << left << "MN988669.txt"      << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << setw(20) << 10 << '\n';



    return 0;
}


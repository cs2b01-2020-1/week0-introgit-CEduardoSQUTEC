#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

string f1 = "AY274119.txt";
string f2 = "AY278488.2.txt";
string f3 = "MN908947.txt";
string f4 = "MN988668.txt";
string f5 = "MN988669.txt";
string path = "genomes/";

double  stringSimilarity(string s1, string s2)
{
    size_t c = 0;
    size_t len = s1.size();
    for (size_t i = 0; i < len; ++i)
    {
        if (s1[i] == s2[i])
            c++;
    }
    return (double(c) / double(len) * 100);
}

string  getGenome(string fileName)
{
    fstream file(path + fileName, ios::in);

    //Check

    if (!file.is_open())
        return "ERROR";

    //Read

    string line;
    string genome = "";
    getline(file, line);

    while (file >> line)
        genome += line;

    file.close();

    return genome;
}

double  genomeSimilary(string file1, string file2)
{
    string genome1 = getGenome(file1);
    string genome2 = getGenome(file2);

    if (genome1 == "ERROR" || genome2 == "ERROR")
        return -1;
    return (stringSimilarity(genome1, genome2));
}


int     main()
{
    cout << setw(20) << left << " " << setw(20) << f1 << setw(20) << f2 << setw(20) << f3 << setw(20) << f4 << setw(20) << f5 << '\n';
    cout << setw(20) << left << f1  << setw(20) << genomeSimilary(f1, f1) << setw(20) << genomeSimilary(f2, f1) << setw(20) << genomeSimilary(f3, f1) << setw(20) << genomeSimilary(f4, f1) << setw(20) << genomeSimilary(f5, f1) << '\n';
    cout << setw(20) << left << f2  << setw(20) << genomeSimilary(f1, f2) << setw(20) << genomeSimilary(f2, f2) << setw(20) << genomeSimilary(f3, f2) << setw(20) << genomeSimilary(f4, f2) << setw(20) << genomeSimilary(f5, f2) << '\n';
    cout << setw(20) << left << f3  << setw(20) << genomeSimilary(f1, f3) << setw(20) << genomeSimilary(f2, f3) << setw(20) << genomeSimilary(f3, f3) << setw(20) << genomeSimilary(f4, f3) << setw(20) << genomeSimilary(f5, f3) << '\n';
    cout << setw(20) << left << f4  << setw(20) << genomeSimilary(f1, f4) << setw(20) << genomeSimilary(f2, f4) << setw(20) << genomeSimilary(f3, f4) << setw(20) << genomeSimilary(f4, f4) << setw(20) << genomeSimilary(f5, f4) << '\n';
    cout << setw(20) << left << f5  << setw(20) << genomeSimilary(f1, f5) << setw(20) << genomeSimilary(f2, f5) << setw(20) << genomeSimilary(f3, f5) << setw(20) << genomeSimilary(f4, f5) << setw(20) << genomeSimilary(f5, f5) << '\n';

    return 0;
}

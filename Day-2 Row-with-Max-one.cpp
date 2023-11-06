#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#include "solution.h"

class Runner
{
    int n , m;
    vector<vector<int>> matrix;

public:
    void takeInput()
    {
        cin >> n >> m;
        matrix.resize(n);
        for(int i = 0 ; i <n; i++){
            matrix[i].resize(m);
        }
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j<m ; j++){
                cin>>matrix[i][j];
            }
        }
    }

    void execute()
    {
        int ans = rowWithMax1s(matrix , n , m);
    }

    void executeAndPrintOutput()
    {
        int ans = rowWithMax1s(matrix , n , m);
        cout << ans;
        cout << '\n';
    }
};

int main()
{
    // for (int i = 1; i <= 50; i++)
    // {
    //     string filename1 = "./Testcases/large/in/input" + to_string(i) + ".txt";
    //     string filename2 = "./Testcases/large/out/output" + to_string(i) + ".txt";
        
    //     ifstream inputFile(filename1);
    //     ofstream outputFile(filename2);
        
    //     if (inputFile.is_open() && outputFile.is_open())
    //     {
    //         cin.rdbuf(inputFile.rdbuf());   // Redirect cin to input file
    //         cout.rdbuf(outputFile.rdbuf()); // Redirect cout to output file
            
    //         Runner runner;
    //         runner.takeInput();
    //         runner.executeAndPrintOutput();
            
    //         cin.rdbuf(nullptr);   // Reset cin to standard input
    //         cout.rdbuf(nullptr);  // Reset cout to standard output
            
    //         inputFile.close();
    //         outputFile.close();
    //     }
    //     else
    //     {
    //         cerr << "Failed to open input or output file." << endl;
    //     }
    // }
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}

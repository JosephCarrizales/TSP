#include <bitset>
#include <string>
#include <chrono>
#include "graph.h"
#include "tspProblem.h"


using namespace std;
using namespace std::chrono;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;
    ifstream graph1(filename);
    if (!graph1.is_open()) {
        cerr << "Couldn't open graph file" << endl;
        return 1;
    }
    
    Graph g;
    g.read(graph1);

    auto start = high_resolution_clock::now(); //start time

    tspProblem prob1(g);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    
    prob1.print();
    cout << "Algorithm execution time: " << duration.count() << " milliseconds" << endl;



    graph1.close();
    return 0;
}
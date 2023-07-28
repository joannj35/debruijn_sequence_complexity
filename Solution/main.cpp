#include "SequenceGenerator.h"
#include <iostream>
#include <vector>
#include "ComplexityToDebruijn.h"
#include <fstream>
#include <chrono>
#include <omp.h>
using namespace std::chrono;
using namespace std;

int main(){
    omp_set_num_threads(12);
    cout << "Starting..." << endl;
    /*auto start = high_resolution_clock::now();
    SequenceGenerator se(17);
    auto d = se.getSequences();
    cout << se.getNumOfSeq() << endl;
    for (int i = 0; i < d.size(); ++i) {
        cout << d[i] << endl;
    }
    auto end = high_resolution_clock::now();
    auto duration= duration_cast<seconds>(end - start);
    cout << duration.count() << " seconds" << endl;
    return 0;*/
    int order = 7;
    for(int c = 73; c <= 73; c++){
        auto start = high_resolution_clock::now();

        int complexity = c;
        ll total = 0;
        ComplexityToDebruijn C(complexity,order);
        C.compute();
    }
    cout << "Done with all complexities!!!" << endl;
}
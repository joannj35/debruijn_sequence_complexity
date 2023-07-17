//
// Created by Razan on 28/06/2023.
//

#ifndef DEBRUIJN_SEQUENCE_COMPLEXITY_COMPLEXITYTODEBRUIJN_H
#define DEBRUIJN_SEQUENCE_COMPLEXITY_COMPLEXITYTODEBRUIJN_H
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <cmath>
#include <map>
#include "SequenceGenerator.h"

using namespace std;

typedef long long ll;

class ComplexityToDebruijn {
    int complexity;
    int order;
    int sub_complexity;
    ll total_seq_num;
    vector<pair<string, ll>> subseq_to_debruijn; //a map that maps the number of De bruijn sequences(value) to the sub seq that it came from
    void generateXORStrings(const string& s, string& a, string& b, int index, vector<pair<string,string>>& options, vector<bool> check);
    vector<pair<string,string>>  getAllXORStrings(string s);
public:
    ComplexityToDebruijn(int complexity, int order);
    void compute();
    ll fromSubseqToDebruijn(string seq);
    static bool isRotation(const std::string& s1, std::string s2);
    vector<string> removeRotations(const vector<string>& sequences);

    const vector<pair<string, ll>> &getSubseqToDebruijn() const;

};


#endif //DEBRUIJN_SEQUENCE_COMPLEXITY_COMPLEXITYTODEBRUIJN_H

#ifndef _CARGO_H
#define _CARGO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cargo
{
    string name;
    double weight;
    vector<double> price;
public:
    Cargo();
    Cargo(unsigned k);
    Cargo(unsigned k, vector<double> mas);
    Cargo(const Cargo &od);

    ~Cargo()
    {   }

    void setName(const string&name) { this -> name = name;}
    void setWeight(const double&name) {this -> weight = weight;}
    void setPrice(unsigned k, const vector<double>&mas) {
        if (k <= mas.size()) {
            price.resize(k);
            price.assign(mas.begin(), mas.begin() + k);
        } else {
            cerr << "Erorr." << endl;
        }

    }

}
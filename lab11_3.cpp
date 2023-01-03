#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double a,b,d;
    while(getline(source, textline)){
        a += atof(textline.c_str());
        d += pow(atof(textline.c_str()),2);
        b++;
    }
    double mean,sd;
    mean = a/b;
    sd = sqrt(d/b-(pow(mean,2)));


cout << "Number of data = " << b << endl;
cout << setprecision(3);
cout << "Mean = " << mean << endl;
cout << "Standard deviation = " << sd;
}
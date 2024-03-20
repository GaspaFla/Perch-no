#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> //per i manipolatori dell'output (tipo fixed)
#include <cmath>

double redimension(double a) //parametri
{
    double y = (0.75*a)-(1.75);
    return y;
}

int main()
{
    std::string namefile="data.csv";
    std::fstream fstr(namefile);
    double val;
    std::string filename = "result.csv";
    std::ofstream ofs(filename);
    double sum=0;
    int N=0;
    double mean=0;
    ofs << "#N Means\n";
    while(fstr >> val){
        sum+=redimension(val);
        N++;
        mean=sum/N;
        ofs << N<< ". "<<std::setprecision(16)<< std::scientific<<mean <<std::endl;
        std::cout << N<< ". "<<std::setprecision(16) << std::scientific<<mean<<std::endl;
    }
    fstr.close();




    return 0;
}

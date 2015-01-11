#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <unistd.h>
#include <unistd.h>
#include <vector>
#define RESET   "\033[0m"
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
using namespace std;
//void halfSize<long>&);
int main () {
///////////////////////////////////////////////////////////////////
    int n;
    int numfile;
    int x; 
    int i;
    long size;

   // char* buffer[i];
//////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"    Please enter the file name that you want to split with its full path"<<RESET<<endl;
/////////////////////////////////////////////////////////////////////////
    std::string name;
    
    std::cin >> name;
    
///////////////////////////////////////////////////////////////////////    
    std::ifstream infile(name.c_str());
    std::cout<<'\n';
    cin.clear();
///////////////////////////////////////////////////////////////////////
    std::cout<<BOLDBLUE<<"How many files you want split of your input file ? "<<RESET<<std::endl;
    std::cin>>numfile;
    std::cout<<std::endl;
   x=numfile;
///////////////////////////////////////////////////////////////////////////
    infile.seekg(0,std::ios::end);
    size = infile.tellg();
    infile.seekg (0, std::ios::beg);
//    cout<<"  Size= "<<size<<endl;  
   long halfSize[numfile];
    char *buffer[numfile];     


////////////////////////////////////////////////////////////////////////////// 
  for ( i =0; i<numfile; ++i){


        halfSize[0]=0;
        //buffer[0]=0;
        halfSize[i+1] = static_cast<int>(floor((i+1)*size/numfile));
        buffer[i+1]= &[halfSize[i+1]-halfSize[i]];
        infile.read (buffer[i+1],halfSize[i+1]-halfSize[i]);
  //      infile.seekg(halfSize[i+1]);
        stringstream sstream;
        std::string a_i;
        sstream <<i;
        sstream >> a_i;
        std::string file =  "part"  + a_i  +".txt";
        ofstream outfile(file.c_str());
        outfile.write(buffer[i+1], halfSize[i+1]-halfSize[i]);
        cout<<halfSize[i+1]<<endl; 
        outfile.close(); 
        delete[] buffer[i+1]; 
       
       }
///////////////////////////////////////////////////////////////////////////////
return 0;
}

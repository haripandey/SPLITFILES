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
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include <ctime>
#include <cerrno>
#include <unistd.h>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
using namespace std;

int main () {
///////////////////////////////////////////////////////////////////
    int numfile;
    int x;
    long size;
    char* buffer;
    std::cout<<std::endl;
////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;

cout<<'\n';
    std::cout<<BOLDCYAN <<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDRED<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDWHITE<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET<<endl;
////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
    std::cout<<BOLDCYAN <<"                           Read me please:   "<<RESET<<endl<<'\n'; std::cout<<BOLDRED <<"         THIS PROGRAM WILL SPLIT YOUR HUGE FILE IN TO SMALL FILES"<<RESET<<std::endl; cout<<endl;std::cout<<BOLDWHITE<<"  Just prompt the answer of the prompt questions and  complete it to get nember of files "<<RESET<<'\n';std::cout<<BOLDWHITE<<"                   in Desktop/PARTS named as:  part1.txt, part2.txt and so on: "<<RESET<<std::endl;
//////////////////////////////////////////////////////////////////////////       
    std::cout<<BOLDCYAN <<"**********************************"<<RESET;std::cout<<BOLDRED<<"**************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"***************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"******************************"<<RESET;std::cout<<BOLDRED<<"**********************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"******************"<<RESET;std::cout<<BOLDWHITE<<"*********************"<<RESET<<endl;
cout<<'\n';
sleep(1);
//////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"    Please"<<RESET<<endl;sleep(1);std::cout<<BOLDRED<<"  	   enter the file name"<<RESET<<endl;sleep(1);std::cout<<BOLDYELLOW<<"                        that you want to split"<<RESET<<endl;sleep(1);std::cout<<BOLDCYAN<<"                                   with its full path"<<RESET<<endl;
/////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"************************************************************"<<RESET;std::cout<<BOLDRED<<"*****************************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"*********************************"<<RESET;std::cout<<BOLDWHITE<<"***************************************"<<RESET<<endl;

///////////////////////////////////////////////////////////////////////    
    std::string name;
    std::cin >> name;
    std::ifstream infile(name.c_str());
    std::cout<<'\n';
    cin.clear();
///////////////////////////////////////////////////////////////////////
    std::cout<<BOLDBLUE<<"How many files you want split of your input file ? "<<RESET<<std::endl;
    std::cin>>numfile;
    std::cout<<std::endl;
//////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"************************************************************"<<RESET;std::cout<<BOLDRED<<"*****************************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"*********************************"<<RESET;std::cout<<BOLDWHITE<<"***************************************"<<RESET<<endl;


/////////////////////////////////////////////////////////////////////
    infile.seekg(0,std::ios::end);
    size = infile.tellg();
    infile.seekg (0, std::ios::beg);
    std::cout <<BOLDWHITE<< "The file has " << size << " letters. " <<RESET<< std::endl;
///////////////////////////////////////////////////////////////////////////
    buffer = new char [size]; 
    infile.read(buffer,size);
    buffer[infile.gcount()] = 0;            
//////////////////////////////////////////////////////////////////////////
    if (infile){
        std::cout <<BOLDYELLOW<< "All characters in your input file has been read out "<<RESET<<std::endl;
        std::cout<<'\n'<<endl;
        std::cout<<BOLDRED<<"Your project is successiful. Please find your splitted files in: ~/Desktop/PARTS "<<RESET<<std::endl;
        std::cout<<std::endl;  
	   }else{ 
               std::cout << BOLDRED <<"warning: only " << infile.gcount() << " were be read"<<RESET<<std::endl;
               std::cout<<std::endl;}       
////////////////////////////////////////////////////////////////////////////// 
    for(int i =1; i<=numfile; ++i){
       stringstream sstream;
       std::string hari_i;
       sstream <<i;
       sstream >> hari_i;
       std::string outfile =  "part"  + hari_i  +".txt";
       ofstream fout(outfile.c_str());
       fout.write(buffer+(i-1)*size/numfile, i*size/numfile);
       fout.close();      
       }
///////////////////////////////////////////////////////////////////////////////
      delete[] buffer;
return 0;
}

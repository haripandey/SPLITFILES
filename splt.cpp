#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include<ctime>
#include <unistd.h> 
#include<iomanip>
//#include<errno.h>
/////////////////////////////////////////////////////
#define RESET   "\033[0m"
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
///////////////////////////////////////////////////////



using namespace std;
int main (){
//////////////////////////////////////////////////////////////
cout<<'\n';
 std::cout<<BOLDCYAN <<"		*****************"<<RESET;std::cout<<BOLDRED<<"****************************"<<RESET;sleep(0.5);std::cout<<BOLDYELLOW<<"*************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;
    std::cout<<BOLDCYAN <<"				****************"<<RESET;std::cout<<BOLDRED<<"***********"<<RESET;sleep(0.5);std::cout<<BOLDYELLOW<<"********"<<RESET;std::cout<<BOLDWHITE<<"**********                   "<<RESET<<endl;
cout<<'\n';
    std::cout<<BOLDCYAN <<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDRED<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET;std::cout<<BOLDWHITE<<"ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ "<<RESET<<endl;
cout<<'\n';
////////////////////////////////////////////////////////////////////////
    std::cout<<BOLDCYAN <<"                             ****************"<<RESET;std::cout<<BOLDRED<<"***********"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"********"<<RESET;std::cout<<BOLDWHITE<<"**********                   "<<RESET<<endl;
 std::cout<<BOLDCYAN <<"                *****************"<<RESET;std::cout<<BOLDRED<<"****************************"<<RESET;sleep(1);std::cout<<BOLDYELLOW<<"*************"<<RESET;std::cout<<BOLDWHITE<<"***********************"<<RESET<<endl;

//////////////////////////////////////////////////////////////

      
       std::stringstream sstream;
       string name;
       string name1;
       ifstream::pos_type SIZE_OF_INPUT;
       long NumberOfFiles;
       int i=1;
       char* buffer;
       long size;
       std::cout<<BOLDYELLOW<<"			   PLEASE ENTER THE NAME OF INPUT FILE: "<<RESET<<endl;
       cin>>name;   
       name1=name;
       ifstream infile1(name1.c_str());
       infile1.seekg(0,std::ios::end);
       SIZE_OF_INPUT=infile1.tellg();
       std::cout<<BOLDRED<<"              		SIZE_OF_INPUT_FILE = "<<RESET<<SIZE_OF_INPUT<<'\n'<<endl;
       cout<<BOLDCYAN<<"      What should be the size of the splitted files ? please writ in bytes"<<RESET<<endl;
       cin>>size;
       cout<<BOLDYELLOW<<"           *******************************************************************"<<RESET<<endl;
       cout<<BOLDGREEN<<"*             		         size_of_each_output_files = "<<RESET<<size<<endl;
       cout<<BOLDBLUE<<"*"<<RESET<<endl;
       cout<<BOLDWHITE<<"                                               PLEASE ENTER                             "<<RESET<<endl;
       cout<<BOLDYELLOW<<"*			   how many file you have planned to  generate ?"<<RESET<<endl;
       cout<<"*"<<'\n';
       cout<<BOLDBLUE<<"*		   please enter the number = (SIZE_OF_INPUT_FILE/size_of_each_output_files"<<RESET<<endl;
       cout<<BOLDCYAN<<"*"RESET<<'\n';
       cout<<BOLDRED<<"*      NOTE (1):...  If (SIZE_OF_INPUT_FILE/size_of_each_output_files) = integer,  then enter integer+1"<<RESET<<endl;
       cout<<"*"<<'\n';
       cout<<BOLDCYAN<<"*  NOTE(2):..... If (SIZE_OF_INPUT_FILE/size_of_each_output_files) = noninteger,then enetr a integer 2 more then it"<<RESET<<endl;
       cout<<"*"<<'\n';
       cout<<BOLDYELLOW<<"*****************************************************************************************"<<RESET<<endl;
       cin>>NumberOfFiles;

	       ////////////////////////////////////      
	      ///Note That 1 MB= 1048576;//////////
	     //////////////////////////////////////
////////////////////////////////////////////////////////////////////////////// 
     
       //while(!infile.eof()){
       while (i<NumberOfFiles){
       ifstream infile(name.c_str());
       buffer =new char [size];
       infile.seekg ((i-1)*size, std::ios::cur);
       infile.read(buffer,size);
       stringstream sstream;
       std::string hari_i;
       sstream <<i;
       sstream >> hari_i;
       std::string outfile =  "part"  + hari_i  +".txt";
       ofstream fout(outfile.c_str());
       fout.write(buffer,size);
       fout.close();
       delete[]buffer;
       i=i+1;
       } 
return 0;
}

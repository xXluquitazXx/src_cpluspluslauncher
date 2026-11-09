#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <arrayfire.h>
#include <stdio.h>
int main()
{
   int leer = 0;
   const unsigned char pi = 31;
   std::string in7 = "abc";
   std::string out7 = "abc";
   std::cout<<"que archivo queres desencriptar?"<<std::endl; 
   std::cin>>out7;
   

   std::cout<<"como queres que se llame el archivo desencriptado?"<<std::endl; 
   std::cin>>in7;
   std::ifstream inputfile (in7, std::ifstream::binary);
   std::ofstream outfile ("desencript.txt",std::ofstream::binary);
   inputfile.seekg(0,inputfile.end);
   int largo = inputfile.tellg();
   inputfile.seekg(0, inputfile.beg);
   int largototal = inputfile.tellg();
   std::cout<<"este archivo mide"<<largo<<std::endl;
   while (largototal < largo)
   {
      unsigned char breaded = 0;
      inputfile.read(reinterpret_cast<char*>(&breaded), sizeof(breaded));
      std::cout<<breaded<<std::endl;
      af_array bytew = (breaded);
      af_array encripbred = ((bytew - 32) - 110) xor pi;
      unsigned char bytewrite = (encripbred);
      largototal += sizeof(unsigned char);
      inputfile.seekg(largototal, inputfile.beg);
      outfile.write(reinterpret_cast<char*>(&bytewrite), sizeof(bytewrite));      
   }
}

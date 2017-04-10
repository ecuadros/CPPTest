#include <iostream>

int main() 
{
    std::cout << "Hello World!" << std::endl;
    char c='A';
    std::cout<< "Mi Variable c=" << c << "despues ..."<<std::endl;
    c++;
    std::cout<< "Mi Variable c=" << (char)(c+5) << "despues ..."<<std::endl;
    
    for(int i= 0; i < 100 ; i++)
        std::cout<< "i=" << i << " Suma= " << (char)(c+i) <<std::endl;

}

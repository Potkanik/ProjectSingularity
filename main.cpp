<<<<<<< HEAD
/// Main.cpp
/// Hehe hehe asi to ide
/// ide nejde
/// ide nejde
/// ide nejde
/// ide nejde
=======
#include <iostream>
#include <ctime>
#include <string>
#include <chrono>
#include "Classes/Person.h"
// #include "Libraries/cudnn.h"

// using namespace cuda;
using namespace std::chrono;

int main ()
{
 auto start = std::chrono::high_resolution_clock::now();

// skompilujes to cez toto g++ -std=c++11 main.cpp -o main.out
// spustis ./main.out
// git config --global credential.helper 'cache --timeout=36000'
// to je to ay ta to neotravoalo 10 hodin so zadavanim mena a hesla


Person* p = new Person();
p->Width = 5;
p->ID = p->CalculateWidth(p->Width);

Person* pp = new Person(10);
pp->Width = 50;
pp->ID = 0;

long long bilion = 1000000000;
long long i;
for(i = 0; i < bilion; i++)
{
    long long milion = 100000000;
if(i % milion == 0)
std::cout << std::to_string(i) << '\r' << std::flush ;

}


<<<<<<< HEAD
=======

>>>>>>> 0a65b33ceb35f38881ab15afdeba5e48be3dfa22
auto elapsed = std::chrono::high_resolution_clock::now() - start;

long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
std::cout <<  + "\n";
std::cout << "Execution time is: "+ std::to_string(microseconds)+ " microseconds (" + std::to_string(microseconds*0.000001) + " seconds).\n";
  return 0;
}
>>>>>>> 9a8e59fc1982d52fd1cb7b04acb5b35b5805d277

#include <iostream>
#include <cstdlib>   // rand and srand
#include <ctime>     // For the time function
using namespace std;

int main() {
   // Get the system time.
   unsigned seed = time(0);
   
   // Seed the random number generator.
   // srand(seed); 
   
   // Display three random numbers.
   cout << rand() << endl;
   cout << rand() << endl;
   cout << rand() << endl;
}



// The program does not generate three unique number everytime it runs. I am not 100% sure why this happens one reseaon obviously is that we commented out the command "srand(seed);" so there is no input to generate random numbers and instead it generates the same number everytime. Also we know that seed = time and that the srand (seed) and that seeds with randoms integers. 
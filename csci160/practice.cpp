#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
   if (argc < 1)
   {
      cout << "error! program quits\n";
      return 0;
   }
   for (int pos = 1; pos < argc, pos +2)
   {
      cout << argv[pos];
   }
}

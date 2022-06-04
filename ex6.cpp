#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
double x = 6.0;
const double y = 1.0;
bool z = true;
asm(
"fldl %[y];"
"fldl %[x];"
"fucomi %%st(1), %%st(0)"
:[Z]"=@ccb"(z)
:[x]"m"(x), [y]"m"(y)
:"cc"
);
cout << z << endl;
return 0;
}

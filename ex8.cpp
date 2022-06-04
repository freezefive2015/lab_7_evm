#include <cstdio>
#include <iostream>
using namespace std;
int main() {
long double x = -4;
const long double y = 1.0;
bool b = 1;
asm(
"fldt %[y];"
"fldt %[x];"
"fucomi %%st(1), %%st(0);"
:[B]"=@ccb"(b)
:[x]"m"(x), [y]"m"(y)
:"cc"
);
cout << b << endl;
return 0;
}

#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
double a = -60, b = 1;
bool res;
asm("vcmpsd $0b01, %%xmm1, %%xmm0, %%xmm0\n\t"
"vandpd %[A], %%xmm0, %%xmm0\n\t"
"vmovsd %%xmm0, %[Z]\n\t"
: [Z] "=m"(res)
: [X] "x"(a), [Y] "x"(b), [A] "x"(0b1)
:"memory");
cout << res << endl;
if (res){
cout << "a<b" << endl;
}
else{
cout << "a>=b" << endl;}
return 0;
}

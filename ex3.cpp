#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
int a = 10;
short r;
asm(
 "movl %[X], %%eax\n"
 "mov $0, %%ebx\n"
 "cmp $1, %%eax\n"
 "jl less\n"
 "jmp ok\n"
 "less: mov $1, %%bx\n"
 "ok: \n"
 : "=b" (r)
 : [X]"m" (a)
 :"cc"
);
cout << r << endl;
return 0;
}

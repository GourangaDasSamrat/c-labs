#include <stdio.h>

int main() {
// Unsigned int - stores only non-negative values
// Assigning -100 causes wrap-around due to unsigned overflow
unsigned int smallTeaPack = -100;
// Result will be UINT_MAX - 99, not -100. Not "garbage", just modulo arithmetic

// Long typed data - larger than int on many systems
long largeTeaStall = 574857857485724L;
// Using int here would overflow if int is 32-bit. Double/float would lose precision

// Long long - for even bigger integers
long long extraLargeStall = 4347284782478888887LL;

// Short typed data - smaller than int
short teaSample = 100;

printf("%llu\n", extraLargeStall);
return 0;
}

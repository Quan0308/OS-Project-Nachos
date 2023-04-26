#include "syscall.h"

int main()
{
    int i;
    for (i = 0; i < 5; i++) Write("Hello", 255, ConsoleOutput);
}
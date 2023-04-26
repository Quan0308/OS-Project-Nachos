#include "syscall.h"

int main()
{
    char temp[1];
    Exec("./test/ping");
    Exec("./test/pong");
    
    //Read(temp, 1, ConsoleInput);
    //Halt();
}
#include <unistd.h>

int main()
{
    write(1, "Hello", 5);
    write(1, "\nHello\n", 7);
}

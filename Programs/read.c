#include <unistd.h>

int main()
{
    int n;
    char buff[50];
    n = read(0,buff,50);
    write(1,buff,n);
}

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int n,f;
    char buff[50];
    f = open("test",O_RDONLY);
    n = read(f,buff,50);
    write(1,buff,n);
}

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int n,f,f2;
    char buff[50];
    f = open("test",O_RDONLY);
    f2 = open("test3",O_WRONLY); // file exists
    f2 = open("test2",O_WRONLY | O_CREAT, 777); // if file doesn't exit
    n = read(f,buff,50);
    write(f2,buff,n);
}

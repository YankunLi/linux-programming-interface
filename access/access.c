#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    if (access("/etc/passwd", R_OK) == 0)
    {
        printf("/etc/passwd can be read\n");
    }
}

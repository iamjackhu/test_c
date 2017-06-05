#include <stdio.h>
#include <arpa/inet.h>

int main(int argc, char* argv[])
{
    int rc = 0;
    uint32_t target = 0;
    char* ip1 = "10.23.134.1";
    rc = inet_pton(AF_INET, ip1, &target);
    printf("rc=%d, target=%d\n", rc, target);
 
    char* ip2 = "345.23.234.2";
    target = 0;
    rc = inet_pton(AF_INET, ip2, &target);
    printf("rc=%d, target=%d\n", rc, target);
   
    return 0;
}

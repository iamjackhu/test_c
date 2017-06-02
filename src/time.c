#include <stdio.h>
#include <time.h>

int main()
{
   time_t rawtime;
   time(&rawtime);
   printf("Current time:%d\n", rawtime);

   struct tm * timeinfo;
   timeinfo = localtime( &rawtime );
   printf("Current local time and date : %s\n", asctime(timeinfo));
   return 0;
}

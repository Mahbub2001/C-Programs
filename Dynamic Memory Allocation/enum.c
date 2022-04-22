#include <stdio.h>
enum day {sunday = 2, tuesday, wednesday, thursday, friday, saturday};
  
int main()
{
    enum day d = friday;
    printf("The day number stored in d is %d", d);
    return 0;
}
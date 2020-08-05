#include <stdio.h>

#define LIST_OF_COLORS \
  X(Red) \
  X(Yellow) \
  X(Green) \
  X(Blue) \
  X(Unknown)

enum
{
    HELO, HEL
};

enum Colors {
#define X(x) x,
  LIST_OF_COLORS
#undef X
};

char *toString(int color)
{
   switch(color)
   {
#define X(x) case x: return #x;
   LIST_OF_COLORS
#undef X
   }

   return "Unknown";
}

char *toColor(char *s)
{
#define X(x) if (s == #x) return x; else
   LIST_OF_COLORS
#undef x
    return Unknown;
}

int main(void)
{
   printf("%d = %s\n", Red, toString(Red));
   printf("%d = %s\n", Yellow, toString(Yellow));
   printf("%d = %s\n", Green, toString(Green));

   printf("%d = %s\n", toColor("Green"), "Green");

   return 0;
}

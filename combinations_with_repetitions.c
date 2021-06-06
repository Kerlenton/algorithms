#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define MAX_SIZE 1000

uint8_t *alpha = "abcdefghijklmnopqrstuvwxyz";

size_t enc(uint8_t *from, uint8_t *to, size_t length)
{
  for (size_t i = 0; i < 26; i++)
  {
    for (size_t j = 0; j < length; j++)
      if (alpha[i] == from[j])
        *(to++) = '1';

    *(to++) = '0';
  }

  return length + 25;
}

size_t dec(uint8_t *from, uint8_t *to, size_t length)
{
    uint8_t *alp = alpha;

    for (size_t i = 0; i < length; i++)
    {
        if (from[i] == '0')
            ++alp;
        else
            *(to++) = *alp;
    }

    return length - 25;
}

size_t F(uint8_t *from, uint8_t *to, size_t length, uint8_t mode)
{
    switch(mode)
    {
    case 'E' :
        return enc(from, to, length);
    case 'D' :
        return dec(from, to, length);
    default :
        return 0;
    }
}

int main()
{
  uint8_t buf[MAX_SIZE], ch;
  uint8_t encrypted[MAX_SIZE], decrypted[MAX_SIZE];

  size_t pos = 0;

  while ((ch = getchar()) != '\n' && pos < MAX_SIZE - 1)
    buf[pos++] = ch;
  buf[pos] = '\0';

  pos = F(buf, encrypted, pos, 'M');

  for (int i = 0; i < pos; i++)
    printf("%c", encrypted[i]);

  return 0;
}

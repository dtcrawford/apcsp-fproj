#include "encrypt.h"
#include <stdio.h>
#include <string.h>
#include "decrypt.h"

int main(int argc, char* argv[])
{
   int arg = 1;
   while (arg < argc)
  {
    decrypt(3, argv[arg]);
    arg++;
  }
  
}
int main(int argc, char* argv[])
{
   int arg = 1;
   while (arg < argc)
  {
    encrypt(3, argv[arg]);
    arg++;
  }
}

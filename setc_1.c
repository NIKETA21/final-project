#include <stdio.h>

int main(void)
{
  char buf[BUFSIZ], *p;

  printf("Enter phone number: ");
  fflush(stdout);

  fgets(buf,sizeof buf,stdin);

  for (p = buf;*p;p++)
  {
    /* print out each character here, *p */
    switch (*p)
    {
      case 'a':
      case 'b':
      case 'c':
        printf("2");
        break;
      case 'd':
      case 'e':
      case 'f':
        printf("3");
        break;
      case 'g':
      case 'h':
      case 'i':
        printf("4");
        break;
      case 'j':
      case 'k':
      case 'l':
        printf("5");
        break;
      case 'm':
      case 'n':
      case 'o':
        printf("6");
        break;
      case 'p':
      case 'q':
      case 'r':
      case 's':
        printf("7");
        break;
      case 't':
      case 'u':
      case 'v':
        printf("8");
        break;
      case 'w':
      case 'x':
      case 'y':
      case 'z':
        printf("9");
        break;

    }
  }

  return 0;
}

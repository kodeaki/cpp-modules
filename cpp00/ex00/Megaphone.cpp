#include <iostream>

int main(int argc, char*argv[])
{
  int i = 1;

  if (argc > 1)
    while (i < argc){
      std::cout << argv[i++];
    }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << "\n";
}

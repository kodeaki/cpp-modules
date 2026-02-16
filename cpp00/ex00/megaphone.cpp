
#include <iostream>
#include <string>

void	ft_toupperstr(std::string str)
{
	for (size_t i = 0; i < str.length(); i++){
		std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
	}
}

int main(int argc, char*argv[])
{
  if (argc > 1)
    for (int i = 1; i < argc; i++){
      ft_toupperstr(argv[i]);
    }
  else
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  std::cout << std::endl;
}

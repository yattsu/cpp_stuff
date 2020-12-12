#include <iostream>

double calculate(double r, double u, double i, double p)
{
  if (r == 0 && u != 0 && i != 0)
  {
    r = u / i;
  }
  if (u == 0 && p != 0 && i != 0)
  {
    u = p / i;
  }
  if (i == 0 && u != 0 && r != 0)
  {
    i = u / r;
  }
  if (p == 0 && u != 0 && i != 0)
  {
    p = u * i;
  }

  std::cout << std::endl;
  std::cout << "R = " << r << " Ohms" << std::endl;
  std::cout << "U = " << u << " Volts" << std::endl;
  std::cout << "I = " << i << " Amps" << std::endl;
  std::cout << "P = " << p << " Watts" << std::endl;

  return 0;
}

int main()
{
  double r, u, i, p = 0;
  std::cout << "Enter the values below (0 if unknown)" << std::endl
            << std::endl;
  std::cout << "Resistance (Ω Ohms) = ";
  std::cin >> r;
  std::cout << "Voltage (U Volts) = ";
  std::cin >> u;
  std::cout << "Current (I Amps) = ";
  std::cin >> i;
  std::cout << "Power (P Watts) = ";
  std::cin >> p;

  calculate(r, u, i, p);

  return 0;
}

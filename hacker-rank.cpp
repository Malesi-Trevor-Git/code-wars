#include "vector"
#include "string"
#include "iostream"
#include "sstream"
class Solution
{
public:

static std::string multi_table(int number)
{
  std::ostringstream os;
  for (int i = 1; i <= 10; i++) {
    os << i << " * " << number << " = " << i*number << (i<10 ? "\n" : "");
  }
  return os.str();
}
};
int main()
{
   std::cout<<Solution::multi_table(4);
}
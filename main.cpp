#include <iostream>
#include <gflags/gflags.h>

DEFINE_bool(say_hi, true, "Say hi");

int main(int argc, char* argv[])
{
  google::SetVersionString("0.1");
  google::ParseCommandLineFlags(&argc, &argv, true);
  if (FLAGS_say_hi)
    std::cout << "Hi." << std::endl;
  else
    std::cout << "Shhhh..." << std::endl;
}

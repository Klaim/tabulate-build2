#include <cassert>
#include <sstream>
#include <stdexcept>

#include <tabulate/version.hpp>
#include <tabulate/tabulate.hpp>

int main ()
{
  using namespace std;
  using namespace tabulate;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}

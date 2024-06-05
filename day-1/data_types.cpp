#include <bits/stdc++.h>
using namespace std;

// 1 byte = 8 bit
/**
 * int => 4 byte
 * 		=> 4*8 = 32
 * 		=> range for signed => '-2^31 to 2^31 - 1'
 * 		=> range for unsigned => '0 to 2^32 - 1'
 *
 * float => 4 byte
 *		=> stores upto 7 decimal digits
 *
 * double => 8 byte
 *		=> stores upto 15 decimal digits
 *
 * char	=> 1 byte
 * 		=> 1*8 = 8
 * 		=> range for signed => '-2^7 to 2^7 - 1'
 * 		=> range for unsigned => '0 to 2^8 - 1'
 *
 * boolean => 1 byte
 *
 * short => 2 byte
 * 		=> 2*8 = 16
 * 		=> range for signed => '-2^15 to 2^15 - 1'
 * 		=> range for unsigned => '0 to 2^16 - 1'
 *
 * long => 4 byte (same as int but can be increased)
 * 		=> 4*8 = 32
 * 		=> range for signed => '-2^31 to 2^31 - 1'
 * 		=> range for unsigned => '0 to 2^32 - 1'
 */

int main() {

  cout << "Size of Int      => " << sizeof(int) << endl;    // output => 4
  cout << "Size of Float    => " << sizeof(float) << endl;  // output => 4
  cout << "Size of Double   => " << sizeof(double) << endl; // output => 8
  cout << "Size of Char     => " << sizeof(char) << endl;   // output => 1
  cout << "Size of Boolean  => " << sizeof(bool) << endl;   // output => 1
  cout << "Size of String   => " << sizeof(string) << endl; // output => 24

  cout << endl;

  string str = "abcdefghijklmnopqrstuvwxyz";
  /**
   * We can understand this as "sizeof" gives the size of data type not variable,
   * whereas others are used for variables
   */
  cout << sizeof(str) << endl;    // output => 24
  cout << str.capacity() << endl; // output => 26
  cout << str.size() << endl;     // output => 26
  cout << str.length() << endl;   // output => 26

  return 0;
}

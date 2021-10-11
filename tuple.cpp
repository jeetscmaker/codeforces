// tuple constructors
#include <iostream>     // cout
#include <utility>      // make_pair
#include <tuple>        // tuple, make_tuple, get
using namespace std;

int main ()
{
  tuple<int,char> first;                             // default
  tuple<int,char> second (first);                    // copy
  tuple<int,char> third (make_tuple(20,'b'));        // move
  tuple<long,char> fourth (third);                   // implicit conversion
  tuple<int,char> fifth (10,'a');                    // initialization
  tuple<int,char> sixth (make_pair(30,'c'));         // from pair / move

  cout << "sixth contains: " << get<0>(sixth);
  cout << " and " << get<1>(sixth) << '\n';
  pair<int,char> mypair (0,' ');

  tuple<int,char> a (10,'x');
  tuple<long,char> b, c;

  b = a;                                             // copy assignment
  c = make_tuple (100L,'Y');                         // move assignment
  a = c;                                             // conversion assignment
  c = make_tuple (100,'z');                          // conversion / move assignment
  a = mypair;                                        // from pair assignment
  a = make_pair (2,'b');                             // form pair /move assignment

  cout << "c contains: " << get<0>(c);
  cout << " and " << get<1>(c) << endl;

  tuple<int,int,char> t(10, 5, 'g');
  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t);
  return 0;
}
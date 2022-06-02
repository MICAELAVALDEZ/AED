#include <string>   // Incluye la biblioteca de string
// definido en la biblioteca de esta manera:
// "typedef basic_string<char>    string;".

#include <cassert>
int main() {

    assert(true);
    assert('a' != 'b');
    assert(868 == 868);
    assert(148978 > -7);
    assert(12 == std::string("Las Palabras").length());
    assert((std::string("Casa").length())< (std::string("colectivo").length()));
    assert((3*2)==(2+2+2));
    assert( 'C' - 'A' == 2);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);
    assert('C' - 2 == 65 and 'C' - 2 == 'A');
    assert(0.23 > -1.0);
    assert(3E2 == 3e2 );
    assert(3E2 == 3*10*10 );
    assert(3E2 == 300.0 );
    assert(3E6 == 3000000.0 );
    assert(3E6 == 3'000'000.0 );
    assert(2.0 + 1 == 3.0);
    assert(1.0);
    
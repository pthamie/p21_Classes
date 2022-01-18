#include "tests.h"
#include "ClasseA.h"

SCENARIO( "print" ) {
    GIVEN( "classeA" ) {

        WHEN("ClasseA instanciated") {
            ClasseA a;

            THEN("Print") {
                int ret = a.print();
                REQUIRE(ret == 1 );
            }

        }
    }
}

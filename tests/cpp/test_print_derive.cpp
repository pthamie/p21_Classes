#include "tests.h"
#include "ClasseB.h"

SCENARIO( "print derive" ) {
    GIVEN( "classeB" ) {
        ClasseB *pb =0;
        pb = new ClasseB;

        WHEN("ClasseB instanciated") {

            THEN("Print") {
                int ret = pb->print();
                REQUIRE(ret == 1 );
            }

        delete pb;
        }
    }
}

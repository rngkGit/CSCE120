// this is the ONLY file you should submit to Gradescope
#include "nth_root.h"
#include "test_helpers.h"

int main() {
    {   // MINIMUM REQUIREMENT (for this lab)
        // TODO(student): just call the function with various values of n and x
        try {
            nth_root(2, 1);
            nth_root(4, 1);
            nth_root(2, 4);
            nth_root(2, 2);
            nth_root(9, 500);
            nth_root(0, 0);
            nth_root(0, 1);
            nth_root(1, 0);
            nth_root(-1, -1);
            nth_root(-1, 0);
            nth_root(0, -1);
            nth_root(2, 0);
            nth_root(0, 2);
            nth_root(-2, 0);
            nth_root(0, -2);
            nth_root(2, -1);
            nth_root(-1, 2);
            nth_root(-12, 1);
            nth_root(-12, 2);
            nth_root(-4, 1);
            nth_root(-4, 2);
            nth_root(-4, 16);
            nth_root(4, 16);
            nth_root(5, -2);
            nth_root(7, -17);
            nth_root(9, 6.7);
        } catch (std::domain_error e) {

        }
    }

    {   // TRY HARD
        // TODO(student): report the value
        try {
            report(nth_root(2, 1));
            report(nth_root(4, 1));
            report(nth_root(2, 4));
            report(nth_root(2, 2));
            report(nth_root(9, 500));
            report(nth_root(0, 0));
            report(nth_root(0, 1));
            report(nth_root(1, 0));
            report(nth_root(-1, -1));
            report(nth_root(-1, 0));
            report(nth_root(0, -1));
            report(nth_root(2, 0));
            report(nth_root(0, 2));
            report(nth_root(-2, 0));
            report(nth_root(0, -2));
            report(nth_root(2, -1));
            report(nth_root(-1, 2));
            report(nth_root(-12, 1));
            report(nth_root(-12, 2));
            report(nth_root(-4, 1));
            report(nth_root(-4, 2));
            report(nth_root(-4, 16));
            report(nth_root(4, 16));
            report(nth_root(5, -2));
            report(nth_root(7, -17));
            report(nth_root(9, 6.7));
        } catch (std::domain_error e) {

        }
    }

    {   // TRY HARDER
        // TODO(student): compare the actual value to the expected value
        try {
            expect_near(nth_root(2, 1), 1);
            expect_near(nth_root(4, 1), 1);
            expect_near(nth_root(2, 4), 2);
            expect_near(nth_root(3, 8), 2);
            expect_near(nth_root(2, 9), 3);
            expect_near(nth_root(3, 27), 3);
            expect_throw(nth_root(2, -1), std::domain_error);
        } catch (std::domain_error e) {
            
        }
    }
}

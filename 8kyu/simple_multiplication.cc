#include <igloo/igloo_alt.h>
using namespace igloo;

int simpleMultiplication(int a) {
    return a * (8 + (a & 1));
}

Describe(simpleMultiplicationTest){It(multiply){Assert::That(simpleMultiplication(2), Equals(16));
Assert::That(simpleMultiplication(1), Equals(9));
Assert::That(simpleMultiplication(8), Equals(64));
Assert::That(simpleMultiplication(4), Equals(32));
Assert::That(simpleMultiplication(5), Equals(45));
}
}
;

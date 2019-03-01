#include "gtest/gtest.h"
#include <stdio.h>

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;

class EventListener : public EmptyTestEventListener
{
public:
    virtual void OnTestProgramStart(const UnitTest&)
    {
        fprintf(stdout, "Bienvenido a la ejecución de las pruebas");
        fflush(stdout);
    }

    virtual void OnTestPartResult(const TestPartResult& tpr)
    {
        //fprintf(stdout, "%s \n %s");
        printf("%s", tpr.failed() ? "falló la prueba, algo hiciste mal" : "Correcto");
    }
};

TEST(TcnUno, tname)
{
    ASSERT_EQ(1,-1);
}


int main(int argc, char**argv)
{
    InitGoogleTest(&argc, argv);
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_result_printer());
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}
#include"gtest/gtest.h"

class MyTestEventListener : public ::testing::EmptyTestEventListener
{
public:
    virtual void OnTestStart(const ::testing::TestInfo& ti)
    {
        printf("test case name %s test name %s", ti.test_case_name(), ti.name());
    }

    virtual void OnTestPartResult(const ::testing::TestPartResult& test_part_result) {
        fprintf(stdout,
                "%s in %s:%d\n%s\n",
                test_part_result.failed() ? "*** Falla" : "éxito",
                test_part_result.file_name(),
                test_part_result.line_number(),
                test_part_result.summary());
        fflush(stdout);
      }
};

TEST(myTestCase, myTest)
{
    ASSERT_EQ(1,1);
    ASSERT_EQ(1,2);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    //delete list.Release(list.default_result_printer());
    ::testing::TestEventListeners& list = testing::UnitTest::GetInstance()->listeners();
    list.Append(new MyTestEventListener);
    return RUN_ALL_TESTS();
}
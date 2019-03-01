#include"gtest/gtest.h"
#include "Hierarchie.h"

template<class T>
class Fixture : public ::testing::Test, public ::testing::TestWithParam<T>
{
public:
    void SetUp()
    {
        parent = new T;
    }
    void TearDown()
    {
        delete parent;
    }
    T* parent;
};



typedef ::testing::Types<int, char, double> implementations;

TYPED_TEST_CASE(Fixture, implementations);

TYPED_TEST(Fixture, implementations)
{
    this->parent->doSomething();
}

INSTANTIATE_TEST_CASE_P(name, Fixture, Values(1,2,3));

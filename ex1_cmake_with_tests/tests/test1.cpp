//
// Created by Dorel Lucanu on 4/28/21.
//

#include <gtest/gtest.h>
#include "../includes/fnctns.h"
#include "../includes/sort.h"
#include <climits>


//TEST(Ex1Test, CombinedAssertions) {
//    EXPECT_EQ(inc2(2), sqr(2));
//    ASSERT_TRUE(sqr(7) > inc2(7));
//    ASSERT_TRUE(inc2(1) > sqr(1));
//}


//Testele pt sortare
TEST(insertionSort,test1)
{
    int v[]={3,6,4,7},n=4;
    EXPECT_EQ(insertionSort1(v,n,0),1);
}
TEST(insertionSort1,testascendenta)
{
    int v[]={3,6,4,7},n=4;
    insertionSort2(v,n,1);
    EXPECT_EQ(v[0],3);
}
TEST(insertionSort1,testdescendenta)
{
    int v[]={3,6,4,7},n=4;
    insertionSort2(v,n,0);
    EXPECT_EQ(v[0],7);
}
TEST(insertionSort,testprimulel)
{
    int v[]={6,3,4,7},n=4;
    insertionSort3(v,n,1);
    EXPECT_EQ(v[0],3);
}
TEST(insertionSort,testultimulel)
{
    int v[]={6,3,7,4},n=4;
    insertionSort3(v,n,1);
    EXPECT_EQ(v[3],7);
}
int main()
{
    int v[]={6,3,7,4},n=4;
    insertionSort(v,n,1);
    for(int i=0;i<n;i++)
        printf("%d ",v[i]);
    return 0;
}

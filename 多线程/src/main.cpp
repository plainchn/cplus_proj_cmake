#include "simplecase.hpp"
#include "thread_condition.hpp"
#include "thread_future.hpp"
#include "vector"
#include "unistd.h"
using namespace std;

int main()
{
    // {
    //     test_join_detach();
    //     test_hardware_concurrency();
    // }
    {
        test_condition();
    }
 
    // {
    //     test_doAsyncWorkWhenWait();
    // }
    
    return 0;
}
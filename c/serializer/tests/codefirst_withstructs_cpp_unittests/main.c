// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "testrunnerswitcher.h"

int main(void)
{
    size_t failedTestCount = 0;
    RUN_TEST_SUITE(CodeFirst_UnitTests_Two_Providers_With_Structs, failedTestCount);
    return failedTestCount;
}
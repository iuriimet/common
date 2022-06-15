/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdlib.h>
#include <string.h>
#include "tizen.h"
#include "private/tizen_error_private.h"

__attribute__((optnone))
int buffer_underflow()
{
    int idx = -1;
    char buffer[42];
    buffer[idx] = 42;
    return 0;
}

void set_last_result(int err)
{
    buffer_underflow();
    tizen_last_error = err;
}
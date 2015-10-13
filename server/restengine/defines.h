
/*
 * Copyright © 2012-2015 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the “License”); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an “AS IS” BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

typedef void* (PFN_VMREST_THR_ROUTINE)(void*);

#define VMREST_WORKER_THREAD_COUNT 5

#define BAIL_ON_POSIX_THREAD_ERROR(dwError) \
        if (dwError) \
            goto error;

#define ERROR_NOT_SUPPORTED 100

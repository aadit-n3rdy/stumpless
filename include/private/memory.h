/* SPDX-License-Identifier: Apache-2.0 */

/*
 * Copyright 2018-2020 Joel E. Anderson
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __STUMPLESS_PRIVATE_MEMORY_H
#  define __STUMPLESS_PRIVATE_MEMORY_H

#  include <stddef.h>

void *alloc_mem( size_t size );
void free_mem( const void *mem );
size_t get_paged_size( size_t size );
void *realloc_mem( const void *mem, size_t size );
void *alloc_array( size_t item_count, size_t item_size );

#endif /* __STUMPLESS_PRIVATE_MEMORY_H */

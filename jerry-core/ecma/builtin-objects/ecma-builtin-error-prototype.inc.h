/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Error.prototype built-in description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

/* Object properties:
 *  (property name, object pointer getter) */

/* ECMA-262 v5, 15.11.4.1 */
OBJECT_VALUE (LIT_MAGIC_STRING_CONSTRUCTOR,
              ECMA_BUILTIN_ID_ERROR,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.11.4.2 */
STRING_VALUE (LIT_MAGIC_STRING_NAME,
              LIT_MAGIC_STRING_ERROR_UL,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* ECMA-262 v5, 15.11.4.3 */
STRING_VALUE (LIT_MAGIC_STRING_MESSAGE,
              LIT_MAGIC_STRING__EMPTY,
              ECMA_PROPERTY_CONFIGURABLE_WRITABLE)

/* Routine properties:
 *  (property name, C routine name, arguments number or NON_FIXED, value of the routine's length property) */
ROUTINE (LIT_MAGIC_STRING_TO_STRING_UL, ECMA_ERROR_PROTOTYPE_ROUTINE_TO_STRING, 0, 0)

#include "ecma-builtin-helpers-macro-undefs.inc.h"

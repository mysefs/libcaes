/*
 * Python object definition of the libcaes tweaked context
 *
 * Copyright (C) 2011-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYCAES_TWEAKED_CONTEXT_H )
#define _PYCAES_TWEAKED_CONTEXT_H

#include <common.h>
#include <types.h>

#include "pycaes_libcaes.h"
#include "pycaes_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pycaes_tweaked_context pycaes_tweaked_context_t;

struct pycaes_tweaked_context
{
	/* Python object initialization
	 */
	PyObject_HEAD

	/* The libcaes tweaked context
	 */
	libcaes_tweaked_context_t *context;
};

extern PyMethodDef pycaes_tweaked_context_object_methods[];
extern PyTypeObject pycaes_tweaked_context_type_object;

PyObject *pycaes_tweaked_context_new(
           void );

int pycaes_tweaked_context_init(
     pycaes_tweaked_context_t *pycaes_context );

void pycaes_tweaked_context_free(
      pycaes_tweaked_context_t *pycaes_context );

PyObject *pycaes_tweaked_context_set_keys(
           pycaes_tweaked_context_t *pycaes_context,
           PyObject *arguments,
           PyObject *keywords );

#if defined( __cplusplus )
}
#endif

#endif


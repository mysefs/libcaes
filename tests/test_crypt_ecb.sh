#!/bin/bash
#
# Library AES-ECB de/encryption testing script
#
# Copyright (c) 2011-2013, Joachim Metz <joachim.metz@gmail.com>
#
# Refer to AUTHORS for acknowledgements.
#
# This software is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this software.  If not, see <http://www.gnu.org/licenses/>.
#

EXIT_SUCCESS=0;
EXIT_FAILURE=1;
EXIT_IGNORE=77;

test_crypt_ecb()
{ 
	echo "Testing AES-ECB de/encryption";

	./${CAES_TEST_ARRAY};

	RESULT=$?;

	echo "";

	return ${RESULT};
}

CAES_TEST_ARRAY="caes_test_crypt_ecb";

if ! test -x ${CAES_TEST_ARRAY};
then
	CAES_TEST_ARRAY="caes_test_crypt_ecb.exe";
fi

if ! test -x ${CAES_TEST_ARRAY};
then
	echo "Missing executable: ${CAES_TEST_ARRAY}";

	exit ${EXIT_FAILURE};
fi

if ! test_crypt_ecb;
then
	exit ${EXIT_FAILURE};
fi

exit ${EXIT_SUCCESS};

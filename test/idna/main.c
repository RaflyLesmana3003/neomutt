/**
 * @file
 * Test code for Path Operations
 *
 * @authors
 * Copyright (C) 2019 Richard Russon <rich@flatcap.org>
 *
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "acutest.h"

/******************************************************************************
 * Add your test cases to this list.
 *****************************************************************************/
#define NEOMUTT_TEST_LIST                                                      \
  NEOMUTT_TEST_ITEM(test_mutt_idna_intl_to_local)                              \
  NEOMUTT_TEST_ITEM(test_mutt_idna_local_to_intl)                              \
  NEOMUTT_TEST_ITEM(test_mutt_idna_print_version)                              \
  NEOMUTT_TEST_ITEM(test_mutt_idna_to_ascii_lz)

/******************************************************************************
 * You probably don't need to touch what follows.
 *****************************************************************************/
#define NEOMUTT_TEST_ITEM(x) void x(void);
NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM

TEST_LIST = {
#define NEOMUTT_TEST_ITEM(x) { #x, x },
  NEOMUTT_TEST_LIST
#undef NEOMUTT_TEST_ITEM
  { 0 }
};

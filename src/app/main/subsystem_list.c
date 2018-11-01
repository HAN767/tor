/* Copyright (c) 2003-2004, Roger Dingledine
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2018, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#include "orconfig.h"
#include "app/main/subsysmgr.h"
#include "lib/cc/compat_compiler.h"
#include "lib/cc/torint.h"

#include "lib/err/torerr_sys.h"
#include "lib/process/winprocess_sys.h"
#include "lib/thread/thread_sys.h"

#include <stddef.h>

/**
 * Global list of the subsystems in Tor, in the order of their initialization.
 **/
const subsys_fns_t *tor_subsystems[] = {
  &sys_winprocess,
  &sys_torerr,
  &sys_threads,
};

const unsigned n_tor_subsystems = ARRAY_LENGTH(tor_subsystems);

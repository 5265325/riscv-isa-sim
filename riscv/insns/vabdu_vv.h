// vabdu.vv vd, vs1, vs2, vm

#include "v_ext_macros.h"

require_zvabd;
require(P.VU.vsew <= e16);

VI_VV_ULOOP
({
  vd = DO_ABD(vs1, vs2);
})

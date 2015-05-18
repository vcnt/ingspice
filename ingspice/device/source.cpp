#include "stdafx.h"
#include <include/source.h>
#include <common/common.h>

std::string ngdc::card()
{
	return FormatString(100, "V%s %s %s dc %1.3e", name.c_str(), orders[0].c_str(), orders[1].c_str(), v);
}


std::string ngac::card()
{
	return FormatString(512, "V%s %s %s sin(%1.3e %1.3e %1.3e 0 0 %1.3e)", name.c_str(), orders[0].c_str(), orders[1].c_str(), o, a*1.41421356, f, d);
}

std::string ngpluse::card()
{
	return format_string("V%s %s %s pulse(%1.3e %1.3e %1.3e %1.3e %1.3e %1.3e %1.3e)", name.c_str(), orders[0].c_str(), orders[1].c_str(), v1, v2, td, tr, tf, pw, per);
}

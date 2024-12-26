/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VoltagePerReactivePower.hpp"

#include <string>

#include "../src/CIMExceptions.hpp"

using namespace CIMPP;

VoltagePerReactivePower& VoltagePerReactivePower::operator=(long double rop)
{
	value = rop;
	initialized = true;
	return *this;
}

VoltagePerReactivePower::operator long double() const
{
	if (!initialized)
	{
		throw new ReadingUninitializedField();
	}
	return value;
}

const char VoltagePerReactivePower::debugName[] = "VoltagePerReactivePower";
const char* VoltagePerReactivePower::debugString() const
{
	return VoltagePerReactivePower::debugName;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator+=(const VoltagePerReactivePower& rhs)
{
	value += rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator-=(const VoltagePerReactivePower& rhs)
{
	value -= rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator*=(const VoltagePerReactivePower& rhs)
{
	value *= rhs.value;
	return *this;
}

VoltagePerReactivePower& VoltagePerReactivePower::operator/=(const VoltagePerReactivePower& rhs)
{
	value /= rhs.value;
	return *this;
}

namespace CIMPP
{
	std::istream& operator>>(std::istream& lop, VoltagePerReactivePower& rop)
	{
		std::string tmp;
		lop >> tmp;
		rop.value = stold(tmp);
		rop.initialized = true;
		return lop;
	}

	std::ostream& operator<<(std::ostream& os, const VoltagePerReactivePower& obj)
	{
		if (obj.initialized)
		{
			os << obj.value;
		}
		return os;
	}
}
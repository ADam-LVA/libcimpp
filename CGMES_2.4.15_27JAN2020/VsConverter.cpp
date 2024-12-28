/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/
#include "VsConverter.hpp"

#include <algorithm>
#include <ios>
#include <iterator>
#include <sstream>

#include "VsCapabilityCurve.hpp"
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Resistance.hpp"
#include "Simple_Float.hpp"
#include "CurrentFlow.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "Voltage.hpp"
#include "Voltage.hpp"

using namespace CIMPP;

VsConverter::VsConverter() : CapabilityCurve(nullptr) {};
VsConverter::~VsConverter() {};

static const std::list<CGMESProfile> PossibleProfilesForClass =
{
	CGMESProfile::EQ,
	CGMESProfile::SV,
	CGMESProfile::SSH,
};

static const std::map<std::string, std::list<CGMESProfile>> PossibleProfilesForAttributes =
{
	{ "cim:VsConverter.CapabilityCurve", { CGMESProfile::EQ, } },
	{ "cim:VsConverter.delta", { CGMESProfile::SV, } },
	{ "cim:VsConverter.droop", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.droopCompensation", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.maxModulationIndex", { CGMESProfile::EQ, } },
	{ "cim:VsConverter.maxValveCurrent", { CGMESProfile::EQ, } },
	{ "cim:VsConverter.pPccControl", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.qPccControl", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.qShare", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.targetQpcc", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.targetUpcc", { CGMESProfile::SSH, } },
	{ "cim:VsConverter.uf", { CGMESProfile::SV, } },
};

std::list<CGMESProfile>
VsConverter::getPossibleProfilesForClass() const
{
	return PossibleProfilesForClass;
}

std::map<std::string, std::list<CGMESProfile>>
VsConverter::getPossibleProfilesForAttributes() const
{
	auto map = PossibleProfilesForAttributes;
	auto&& parent_map = ACDCConverter::getPossibleProfilesForAttributes();
	map.insert(parent_map.begin(), parent_map.end());
	return map;
}


bool assign_VsConverter_delta(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->delta;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_droop(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->droop;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_droopCompensation(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->droopCompensation;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_maxModulationIndex(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxModulationIndex;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_maxValveCurrent(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->maxValveCurrent;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_pPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->pPccControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_qPccControl(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->qPccControl;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_qShare(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->qShare;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetQpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetQpcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_targetUpcc(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->targetUpcc;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}

bool assign_VsConverter_uf(std::stringstream &buffer, BaseClass* BaseClass_ptr1)
{
	if (VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1))
	{
		buffer >> element->uf;
		if (buffer.fail())
			return false;
		else
			return true;
	}
	return false;
}


bool assign_VsCapabilityCurve_VsConverterDCSides(BaseClass*, BaseClass*);
bool assign_VsConverter_CapabilityCurve(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2)
{
	VsConverter* element = dynamic_cast<VsConverter*>(BaseClass_ptr1);
	VsCapabilityCurve* element2 = dynamic_cast<VsCapabilityCurve*>(BaseClass_ptr2);
	if (element != nullptr && element2 != nullptr)
	{
		if (element->CapabilityCurve != element2)
		{
			element->CapabilityCurve = element2;
			return assign_VsCapabilityCurve_VsConverterDCSides(BaseClass_ptr2, BaseClass_ptr1);
		}
		return true;
	}
	return false;
}

bool get_VsConverter_delta(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->delta;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_droop(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->droop;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_droopCompensation(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->droopCompensation;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_maxModulationIndex(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->maxModulationIndex;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_maxValveCurrent(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->maxValveCurrent;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_qShare(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->qShare;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_targetQpcc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->targetQpcc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_targetUpcc(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->targetUpcc;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_uf(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->uf;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}


bool get_VsConverter_CapabilityCurve(const BaseClass* BaseClass_ptr1, std::list<const BaseClass*>& BaseClass_list)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		if (element->CapabilityCurve != 0)
		{
			BaseClass_list.push_back(element->CapabilityCurve);
			return true;
		}
	}
	return false;
}


bool get_VsConverter_pPccControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->pPccControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

bool get_VsConverter_qPccControl(const BaseClass* BaseClass_ptr1, std::stringstream& buffer)
{
	if (const VsConverter* element = dynamic_cast<const VsConverter*>(BaseClass_ptr1))
	{
		buffer << element->qPccControl;
		if (!buffer.str().empty())
		{
			return true;
		}
	}
	buffer.setstate(std::ios::failbit);
	return false;
}

const char VsConverter::debugName[] = "VsConverter";
const char* VsConverter::debugString() const
{
	return VsConverter::debugName;
}

void VsConverter::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map)
{
	factory_map.insert(std::make_pair(std::string("cim:VsConverter"), &VsConverter_factory));
}

void VsConverter::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.delta"), &assign_VsConverter_delta));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droop"), &assign_VsConverter_droop));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.droopCompensation"), &assign_VsConverter_droopCompensation));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.maxModulationIndex"), &assign_VsConverter_maxModulationIndex));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.maxValveCurrent"), &assign_VsConverter_maxValveCurrent));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.pPccControl"), &assign_VsConverter_pPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qPccControl"), &assign_VsConverter_qPccControl));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.qShare"), &assign_VsConverter_qShare));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetQpcc"), &assign_VsConverter_targetQpcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.targetUpcc"), &assign_VsConverter_targetUpcc));
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.uf"), &assign_VsConverter_uf));
}

void VsConverter::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map)
{
	assign_map.insert(std::make_pair(std::string("cim:VsConverter.CapabilityCurve"), &assign_VsConverter_CapabilityCurve));
}

void VsConverter::addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addPrimitiveGetFnsToMap(get_map);
	get_map.emplace("cim:VsConverter.delta", &get_VsConverter_delta);
	get_map.emplace("cim:VsConverter.droop", &get_VsConverter_droop);
	get_map.emplace("cim:VsConverter.droopCompensation", &get_VsConverter_droopCompensation);
	get_map.emplace("cim:VsConverter.maxModulationIndex", &get_VsConverter_maxModulationIndex);
	get_map.emplace("cim:VsConverter.maxValveCurrent", &get_VsConverter_maxValveCurrent);
	get_map.emplace("cim:VsConverter.qShare", &get_VsConverter_qShare);
	get_map.emplace("cim:VsConverter.targetQpcc", &get_VsConverter_targetQpcc);
	get_map.emplace("cim:VsConverter.targetUpcc", &get_VsConverter_targetUpcc);
	get_map.emplace("cim:VsConverter.uf", &get_VsConverter_uf);
}

void VsConverter::addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const
{
	ACDCConverter::addClassGetFnsToMap(get_map);
	get_map.emplace("cim:VsConverter.CapabilityCurve", &get_VsConverter_CapabilityCurve);
}

void VsConverter::addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const
{
	ACDCConverter::addEnumGetFnsToMap(get_map);
	get_map.emplace("cim:VsConverter.pPccControl", &get_VsConverter_pPccControl);
	get_map.emplace("cim:VsConverter.qPccControl", &get_VsConverter_qPccControl);
}

const BaseClassDefiner VsConverter::declare()
{
	return BaseClassDefiner(VsConverter::addConstructToMap, VsConverter::addPrimitiveAssignFnsToMap, VsConverter::addClassAssignFnsToMap, VsConverter::debugName);
}

namespace CIMPP
{
	BaseClass* VsConverter_factory()
	{
		return new VsConverter;
	}
}

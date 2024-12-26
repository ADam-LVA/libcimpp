#ifndef AnalogLimitSet_H
#define AnalogLimitSet_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "LimitSet.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class Analog;
	class AnalogLimit;

	/*
	An AnalogLimitSet specifies a set of Limits that are associated with an Analog measurement.
	*/
	class AnalogLimitSet : public LimitSet
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogLimitSet();
		~AnalogLimitSet() override;

		std::list<CIMPP::AnalogLimit*> Limits;  /* The limit values used for supervision of Measurements. Default: 0 */
		std::list<CIMPP::Analog*> Measurements;  /* The Measurements using the LimitSet. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AnalogLimitSet_factory();
}
#endif
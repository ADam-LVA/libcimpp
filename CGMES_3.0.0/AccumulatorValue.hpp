#ifndef AccumulatorValue_H
#define AccumulatorValue_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MeasurementValue.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class Accumulator;
	class AccumulatorReset;

	/*
	AccumulatorValue represents an accumulated (counted) MeasurementValue.
	*/
	class AccumulatorValue : public MeasurementValue
	{
	public:
		/* constructor initialising all attributes to null */
		AccumulatorValue();
		~AccumulatorValue() override;

		CIMPP::Accumulator* Accumulator;  /* Measurement to which this value is connected. Default: 0 */
		CIMPP::AccumulatorReset* AccumulatorReset;  /* The command that resets the accumulator value. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AccumulatorValue_factory();
}
#endif
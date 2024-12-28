#ifndef BaseVoltage_H
#define BaseVoltage_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class ConductingEquipment;
	class TopologicalNode;
	class TransformerEnd;
	class VoltageLevel;

	/*
	Defines a system base voltage which is referenced.
	*/
	class BaseVoltage : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		BaseVoltage();
		~BaseVoltage() override;

		std::list<CIMPP::ConductingEquipment*> ConductingEquipment;  /* Base voltage of this conducting equipment.  Use only when there is no voltage level container used and only one base voltage applies.  For example, not used for transformers. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNode;  /* The topological nodes at the base voltage. Default: 0 */
		std::list<CIMPP::TransformerEnd*> TransformerEnds;  /* Transformer ends at the base voltage.  This is essential for PU calculation. Default: 0 */
		std::list<CIMPP::VoltageLevel*> VoltageLevel;  /* The voltage levels having this base voltage. Default: 0 */
		CIMPP::Voltage nominalVoltage;  /* The power system resource`s base voltage. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* BaseVoltage_factory();
}
#endif

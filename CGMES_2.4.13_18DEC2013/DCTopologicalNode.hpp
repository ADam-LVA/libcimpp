#ifndef DCTopologicalNode_H
#define DCTopologicalNode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCNode;
	class DCTopologicalIsland;

	/*
	DC bus.
	*/
	class DCTopologicalNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCTopologicalNode();
		~DCTopologicalNode() override;

		CIMPP::DCEquipmentContainer* DCEquipmentContainer;  /*  Default: 0 */
		std::list<CIMPP::DCNode*> DCNodes;  /* See association end ConnectivityNode.TopologicalNode. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;  /* See association end Terminal.TopologicalNode. Default: 0 */
		CIMPP::DCTopologicalIsland* DCTopologicalIsland;  /*  Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCTopologicalNode_factory();
}
#endif